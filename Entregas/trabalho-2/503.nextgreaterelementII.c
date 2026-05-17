#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int *array = malloc(numsSize * sizeof(*array));
    
    bool isFinded = false;

    for ( int j = 0; j < numsSize; j++ ) {
        
        int actualNumber = nums[j];

        for ( int i = j + 1; i < numsSize; i++ ) {

            if ( actualNumber < nums[i] ) { 
                array[j] = nums[i];
                isFinded = true;
                break;
            }
            
        }

        if ( isFinded == false ){

            for ( int i = 0; i < j; i++ ) { 

                if ( actualNumber < nums[i] ) { 
                    array[j] = nums[i];
                    isFinded = true;
                    break;
                }
            
            }

        }

        if ( isFinded == false ) {
            array[j] = -1;
        }

        isFinded = false;
        
    }

    *returnSize = numsSize;
    return array;
}

int main() {

    int nums[] = {1, 2, 1};
    int numsSize = 3;

    int returnSize;

    int *result = nextGreaterElements(nums, numsSize, &returnSize);

    for ( int i = 0; i < returnSize; i++ ) {
        printf("%d ", result[i]);
    }

    printf("\n");

    free(result);

    return 0;
}