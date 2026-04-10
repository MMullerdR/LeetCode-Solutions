#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    
    char *rString = malloc(sizeof(char));
    *rString = '\0';
    int tamanho = 0;

    for(int i = 0; strs[0][i] != '\0'; i++){ // anda letra

        for(int j = 1; j < strsSize; j++){ // anda palavra
            if(strs[j][i] != strs[0][i]){
                return rString;
            }
        }

        rString = realloc(rString, (tamanho + 2) * sizeof(char));
        rString[i] = strs[0][i];
        tamanho++;
        rString[tamanho] = '\0';
    }
    
    return rString;
}

int main(){

    int strsSize = 3;
    char *strs[] = {"flower", "flow", "flight"};
    
    char *output = longestCommonPrefix(strs, strsSize);
    printf("%s", output);

    free(output);
    return 0;
}   