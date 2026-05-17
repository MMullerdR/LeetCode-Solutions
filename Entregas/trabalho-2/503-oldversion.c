#include <stdio.h>
#include <stdlib.h>

// versão mais limpa do codigo:
int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int *array = malloc(numsSize * sizeof(*array));

    int actualNumber = nums[0];

    for ( int j = 0; j < numsSize; j++ ) {
        
        for ( int i = j; i < numsSize; i++ ) {
            if ( actualNumber < nums[i] ) { 
                array[j] = nums[i];
                break;
            }
            
        }
        
    }
    *returnSize = numsSize;
    return array;
}

// int main () {
//     int array[3];
//     array[0] = 1;
//     array[1] = 2;
//     array[2] = 1;
    
//     int numsSize = 3;
//     int returnSize;

//     int *arrayAux = nextGreaterElements(array, numsSize, &returnSize);
//     printf("%d", arrayAux[1]);

//     return 0;
// }


// tentativa que tava quase dando certo:

// int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
//     int *array = malloc(numsSize * sizeof(*array));
//     int top = -1;
//     int actualBiggestNumber = nums[0];

//     for ( int j = 0; j < numsSize; j++ ) {

//         for ( int i = 0; i <= numsSize; i++ ) {
//             if ( actualBiggestNumber < nums[i] ) { // vê se algum numero do array é maior que o atual
//                 actualBiggestNumber = nums[i];
//                 break;
//             }
//             if ( i == numsSize - 1 && actualBiggestNumber == array[top] ) {
//                 actualBiggestNumber = -1;
//                 break;
//             }
//         }
//         top++;
//         array[top] = actualBiggestNumber;
//         printf("%d\n", array[top]);

//     }
//     *returnSize = top;
//     return array;
// }
 