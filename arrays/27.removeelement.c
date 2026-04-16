#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    if(numsSize < 1) return 0;
    int count = 0;
    int aux[numsSize];
    
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != val){
            aux[count] = nums[i];
            count++;
        }
    }
    for(int i = 0; i < count; i++){
        nums[i] = aux[i];
    }

    return count;
}

int main(){
    int nums[] = {0,1,2,2,3,0,4,2};
    int numsSize = 8;
    int val = 2;
    
    int output = removeElement(nums, numsSize, val);
    
    for(int i = 0; i < output; i++){
        printf("%d", nums[i]);
    }
}
//poderia ser melhor, sem usar o array auxiliar, pouparia memoria e tempo (vi solucao melhor no editorial do leetcode)
//implementei ela no leetcode, mas essa aqui foi a minha versão final, então salvei assim