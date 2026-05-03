#include <stdbool.h>

bool rotateString(char* s, char* goal) {
    int s_len = strlen(s);
    int j = 0;

    while( j < s_len ){
        if( strcmp(s , goal) == 0 ){
            return true;
        }
        char c = s[0];
        for (int i = 0; i < s_len - 1; i++){
            s[i] = s[i+1];
        }
        s[s_len - 1] = c;
        
        j++;
    }
    return false;
}