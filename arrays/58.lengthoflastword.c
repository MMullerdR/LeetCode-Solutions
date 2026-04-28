int lengthOfLastWord(char* s) {
    int tam = strlen(s);
    
    int i = 0;
    int count = 0;

    while ( s[tam-i-1] == ' ' ) {
        i++;
    }
    while( tam-i-1 >= 0 && s[tam-i-1] != ' ' ) {
        count++;
        i++;
    }
    return count;
}