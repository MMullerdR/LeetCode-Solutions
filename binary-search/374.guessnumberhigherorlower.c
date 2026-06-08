/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
int guess(int num);

int guessNumber(int n){
	int left = 1;
    int right = n;

    while (right >= left) {
        int half = left + ( right - left )/2;
        int control = guess(half);
        if ( control == 0 ){
            return half;
        }
        else if ( control == -1 ) {
            right = half - 1;
        }
        else if ( control == 1 ) {
            left = half + 1;
        }
    }

    return 0;
}