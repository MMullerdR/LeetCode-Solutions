int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    int half = right / 2;

    while(right >= left){
        if( nums[half] == target ) {
            return half;
        } else if ( nums[half] < target ) {
            left = half + 1;
        } else {
            right = half - 1;
        }
        half = (left + right)/2;
        
    }
    if(right == left && target > nums[half]){
        return right + 1;
    }
    else if(left > right){
        return left;
    }
    else{
        return half;
    }
    return half;
}