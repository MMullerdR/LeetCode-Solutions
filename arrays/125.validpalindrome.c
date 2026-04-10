#include <stdbool.h>

bool isPalindrome(char* s) {
    int tam = strlen(s);
    if(tam < 2){
        return true;
    } 
    char line[tam];
    int j = 0;
    
    for(int i = 0; i < tam; i++){
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            line[j] = tolower(s[i]);
            j++;
        }
    }

    for(int i = 0; i < j/2; i++){
        if(line[i] != line[j - i - 1]){
            return false;
        }
    }
    return true;
}