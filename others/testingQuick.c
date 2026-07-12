#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int valor1 = *(int *) a, valor2 = *(int *) b;
    if (valor1 > valor2 ){
        return 1;
    } 
    if (valor1 < valor2){
        return -1;
    }
    return 0;
}

int main(){
    int array[] = { 9, 4, 8, 1, 7, 0, 3, 2, 5, 6, 500, 230, 450, 23, -1};
    int numsSize = sizeof(array) / sizeof(array[0]);

    qsort(array, numsSize, sizeof(int), compare);

    for (int i = 0; i < numsSize; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    
}