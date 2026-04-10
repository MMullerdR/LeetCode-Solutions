//usei ajuda de IA 
#include <stdbool.h>

bool isPalindrome(int x) {
    
    if(x < 0 || (x % 10 == 0 && x != 0)) return false; 
    
    int invertido = 0;
    while(x > 0 && invertido < x){
        int digito = x % 10;
        invertido = invertido * 10 + digito;
        x = x/10;
    }

    if(x == invertido  ||  x == invertido / 10) return true;

    return false;
    
}