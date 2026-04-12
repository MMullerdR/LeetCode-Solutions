#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {

    if(numsSize == 0) return 0;
    if (numsSize == 1) return 1;

    int count = 0;
    int atual = *nums;

    for(int i = 1; i < numsSize; i++){
        nums[count] = atual;
        if(nums[i] != atual){
            count++;
            atual = nums[i];
            if(nums[i] == nums[numsSize -1]){
                nums[count] = nums[i]; // se for o ultimo
            }
        }
    }

    return count + 1;

}

int main(){
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int expected[] = {0, 1, 2, 3, 4};
    int numsSize = 10;

    int k = removeDuplicates(nums, numsSize);

    for(int i = 0; i < k; i++){
        if(nums[i] != expected[i]) printf("Error");
        printf("%d\n", nums[i]);
    }
    
    return 0;
}