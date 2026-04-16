#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    int haystack_len = strlen(haystack);
    int needle_len = strlen(needle);
    char *check = malloc((needle_len + 1) * sizeof(check));

    if(needle_len == haystack_len){
        if(strcmp(haystack, needle) == 0){
            return 0;
        }
    }
    
    for(int i = 0; i < (haystack_len - needle_len + 1); i++){
        for(int j = 0; j < (needle_len); j++){
            check[j] = haystack[i + j];
        }

        check[needle_len] = '\0';
        if(strcmp(check, needle) == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    char haystack[] = "leetcode";
    char needle[] = "cod";

    int x = strStr(haystack, needle);
    if(x != -1){
        printf("Indice do primeiro char de needle em haystack: %d\n", x); 
        printf("%s\n", &(haystack[x])); 
    }
    else{
        printf("Needle nao encontrada em haystack.\n");
    }
    return 0;
}