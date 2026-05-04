void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int collum[matrixSize][matrixSize];
    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixSize; j++){
            collum[i][j] = matrix[i][j];
        }
    }

    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixSize; j++){
            matrix[i][j] = collum[matrixSize - j - 1][i];
        }
    }
    
}