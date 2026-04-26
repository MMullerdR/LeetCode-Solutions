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