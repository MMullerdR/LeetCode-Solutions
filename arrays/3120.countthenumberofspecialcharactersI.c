#include <stdbool.h>

int numberOfSpecialChars(char* word) {
    int len = strlen(word);

    if (len == 0 || len == 1) return 0;

    int upperAlfabet[26] = { 0 };
    int lowerAlfabet[26] = { 0 };

    for ( int i = 0; i < len; i++ ) {
        if ( word[i] > 64 && word[i] < 91 ) { // UPPERCASE
            upperAlfabet[word[i] - 65] = true;
        }
        else if ( word[i] > 96 && word[i] < 123 ) { // lowercase
            lowerAlfabet[word[i] - 97] = true;
        }
    }

    int result = 0;
    
    for ( int i = 0; i < 26; i++ ) {
        if ( lowerAlfabet[i] && upperAlfabet[i] && ( lowerAlfabet[i] == upperAlfabet[i] ) ) {
            result++;
        }
    }
    return result;
}