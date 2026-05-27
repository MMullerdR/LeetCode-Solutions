#include <stdbool.h>
#include <stdio.h>

bool check(int* nums, int numsSize) {
    int i = 0;

    for ( int j = 0 ; j < numsSize - 1; j++ ){
        if ( nums[j] > nums[j+1] ) {
            i = i++;
        }
        if (i > 1) {
            return false;
        }
    }
    
    if ( nums[numsSize - 1] > nums[0] ) {
        i++;
    }
    
    
    if ( i <= 1 ) return true;
    return false;
}

int main () {
    int nums[4] = { 2, 1, 3, 4};
    int numsSize = 4;

    bool result = check(nums, numsSize);
    printf("%d", result);
}