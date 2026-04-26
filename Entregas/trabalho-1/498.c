/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize) {
    int tam_vetor = 0;

    for (int x = 0; x < matSize; x++){
        tam_vetor = tam_vetor + matColSize[x];
    }

    printf("%d\n", tam_vetor);

    int *diagonal_vetor = malloc(tam_vetor * sizeof(int));
    int count = 0;

    int i = 0, j = 0;
    while(i < matSize){
        j = 0;
        while(j < matColSize[i]){
            // printf("%d", mat[i][j]);
            *diagonal_vetor = mat[i][j];
            diagonal_vetor++;
            j++;
        }
        i++;
    }
    *returnSize = tam_vetor;
    return diagonal_vetor;

}
        // [0][0], [0][1], [1][0], [2][0], [1][1], [0][2], [1][2], [2][1], [2][2]
        // matSize = numero de colunas
        // matColSize = tamanho da coluna
       