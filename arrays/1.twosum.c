// resolucao do two sum, pelo que pesquisei minha solucao foi On^2
#include <stdlib.h> // adicionei para tirar o problema do return null
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    for(int i = 0; i < numsSize - 1; i++){
        for(int j = i + 1; j < numsSize; j++){
            if((nums[i] + nums[j]) == target){
                int *saida = malloc(2 * sizeof(*saida));
                saida[0] = i;
                saida[1] = j;
                *returnSize = 2;
                return saida;
            }
        }
    }

    *returnSize = 0;
    return NULL; 
}

int main (){
    int nums[10] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 14;
    int returnSize = 2;
    int *output = twoSum(nums, 10, target, &returnSize);

    for(int i = 0; i < returnSize; i++)
        printf("[%d]", output[i]);
}