#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* findDiagonalOrder( int** mat, int matSize, int* matColSize, int* returnSize ) {

	*returnSize = matSize * *matColSize;

	int *diagonal_vetor = malloc( *returnSize * sizeof( int ) );
	int count = 0;
	int isUp = true;
	int colSize = matColSize[0];
	int i = 0;
    int j = 0;

	while ( count < *returnSize ) {
		diagonal_vetor[count] = mat[i][j];
		count++;

		if ( isUp ) {
			if ( i > 0 && ( j + 1 ) < colSize ) {
				i--;
				j++;
			} else {
				if ( j + 1 == colSize ) {
					i++;
				} else {
					j++;
				}
				isUp = false;
			}
		} else {
			if ( i < matSize - 1 && j > 0 ) {
				i++;
				j--;
			} else {
				if ( j == 0 && i < matSize - 1 ) {
					i++;
				} else {
					j++;
				}
				isUp = true;
			}
		}
	}

	return diagonal_vetor;
}

int main() {
    int matSize = 3;
    int colSize = 3;

    int* matColSize = malloc(sizeof(int) * matSize);
    for (int i = 0; i < matSize; i++)
        matColSize[i] = colSize;

    int** mat = malloc(sizeof(int*) * matSize);

    int data[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (int i = 0; i < matSize; i++) {
        mat[i] = malloc(sizeof(int) * colSize);
        for (int j = 0; j < colSize; j++)
            mat[i][j] = data[i][j];
    }

    int returnSize;
    int* result = findDiagonalOrder(mat, matSize, matColSize, &returnSize);

    for (int i = 0; i < returnSize; i++)
        printf("%d ", result[i]);

    free(result);

    for (int i = 0; i < matSize; i++)
        free(mat[i]);
    free(mat);
    free(matColSize);

    return 0;
}