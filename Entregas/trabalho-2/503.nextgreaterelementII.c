#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int *array = malloc(numsSize * sizeof(*array));
    
    bool isFinded = false; // false = nao encontrou numero maior, true = encontrou

    for ( int j = 0; j < numsSize; j++ ) {
        
        int actualNumber = nums[j];

        for ( int i = j + 1; i < numsSize; i++ ) { // busca nos numeros que vem depois do numero atual

            if ( actualNumber < nums[i] ) { 
                array[j] = nums[i];
                isFinded = true;
                break;
            }
            
        }

        if ( isFinded == false ){ // busca nos numeros que vem antes do numero atual

            for ( int i = 0; i < j; i++ ) { 

                if ( actualNumber < nums[i] ) { 
                    array[j] = nums[i];
                    isFinded = true;
                    break;
                }
            
            }

        }

        if ( isFinded == false ) { // nao encontrou
            array[j] = -1;
        }

        isFinded = false;
        
    }

    *returnSize = numsSize;
    return array;
}