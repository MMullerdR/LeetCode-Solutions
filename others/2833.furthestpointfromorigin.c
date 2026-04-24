int furthestDistanceFromOrigin(char* moves) {  // that's not the best code. It works and run at 0ms at leetcode but took too many memory
    int left = 0; int right = 0; int choose = 0;

    while(*moves != '\0'){
        if( *moves == 'L'){
            left++;
        } else if( *moves == 'R'){
            right++;
        } else{
            choose++;
        }
        moves++;
    }
    if( (left > right) || (left == right) ){
        return left - right + choose;
    } else if( left < right ){
        return right - left + choose;
    }
    return 0;
}