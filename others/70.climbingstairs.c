#include <stdio.h>

int climbStairs(int n) { // basicamente é fibonacci, mas explicado de um jeito dificiç
    int n1 = 1, n2 = 1, n3 = 1;
    
    for(int i = 0; i < n - 1; i++){
        if(i % 2 == 0) {
            n3 = n1 + n2;
            n1 = n3;
        }
        else {
            n3 = n1 + n2;
            n2 = n3;
        }
    }
    
    return n3;
}

int main() {
    int n1 = climbStairs(5);
    int n2 = climbStairs(8);
    int n3 = climbStairs(9);

    printf("%d\n%d\n%d\n", n1, n2, n3);
}