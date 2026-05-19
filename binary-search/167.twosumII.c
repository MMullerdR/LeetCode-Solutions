    #include <stdio.h>
    #include <stdlib.h>
    
    /**
    * Note: The returned array must be malloced, assume caller calls free().
    */
    int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
        if ( numbersSize == 0 ) { 
            *returnSize = 0;
            return NULL;
        }
        int *result = malloc(2 * sizeof(int));

        for ( int i = 0; i < numbersSize; i++ ) {
            int right = numbersSize - 1;
            int left = i + 1;
            int n1 = numbers[i];
            
            while (left <= right) {
                int half = ( left + right ) / 2;

                if ( n1 + numbers[half] == target ) {
                    *returnSize = 2;
                    result[0] = i + 1;
                    result[1] = half + 1;
                    return result;

                } else if ( n1 + numbers[half] < target ) {
                    left = half + 1;
                } else if ( n1 + numbers[half] > target) {
                    right = half - 1;
                }
            }
        }
        
        *returnSize = 0;
        return NULL;
    }
        // int n1 = numbers[i];

        // for ( int j = i + 1; j < numbersSize; j++ ) {
        //     int n2 = numbers[j];

        //     if ( n1 + n2 == target ) {
        //         result[0] = i + 1;
        //         result[1] = j + 1;
        //         *returnSize = 2;   
        //         return result;
        //     }
        // }