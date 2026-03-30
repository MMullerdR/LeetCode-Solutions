// resolucao do two sum, pelo que pesquisei minha solucao foi On^2
#include <stdlib.h> // adicionei para tirar o problema do return null

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
    return NULL; //dá warning sem adicionar as bibliotecas
}