#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int divide(int dividend, int divisor) {
//     int quocient = 0;
//     unsigned int dividend_u = abs(dividend);
//     unsigned int divisor_u = abs(divisor);
//     int test = (int) dividend_u;
    
//     while(test - divisor_u > 0){
//         dividend_u = dividend_u - divisor_u;
//         test = dividend_u;
//         quocient++;
//     }
//     if(dividend_u - divisor_u == 0){
//         quocient++;
//     }
    
//     if( ( dividend > 0 && divisor > 0) || ( dividend < 0 && divisor < 0) ){ // numeros com sinais iguais
//         return quocient;
//     } else{
//         return -( quocient );
//     }
// }  
int divide(int dividend, int divisor) {
    int quocient = 0;
    long unsigned int dividend_u = abs(dividend);
    long unsigned int divisor_u = abs(divisor);
    
    while(dividend_u - divisor_u > 0){
        dividend_u = dividend_u - divisor_u;
        quocient++;
    }
    
    if( ( dividend > 0 && divisor > 0) || ( dividend < 0 && divisor < 0) ){ // numeros com sinais iguais
        return quocient;
    } else{
        return -( quocient );
    }
} 
    // dividend > 0 | divisor < 0 
    // dividend > 0 | divisor > 0 

    // dividend < 0 | divisor < 0 
    // dividend < 0 | divisor > 0
int main(){
    int result = divide(10, 3);
    printf("%d", result);
}
