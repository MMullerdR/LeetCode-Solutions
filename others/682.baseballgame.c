int calPoints(char** operations, int operationsSize) {
    int sum;
    int record[operationsSize];
    int top = -1;

    for ( int i = 0; i < operationsSize; i++ ) {
        record[i] = 0;
    }

    for ( int i = 0; i < operationsSize; i++ ) {
        if ( *operations[i] == '+') {
            top++;
            record[top] = record[top-1] + record[top-2];
        }
        else if ( *operations[i] == 'D' ) {
            top++;
            record[top] = 2 * record[top-1];
        }
        else if( *operations[i] == 'C') {
            record[top] = 0;
            top--;
        }
        else{
            top++;
            record[top] = atoi(operations[i]);
        }
    }

    for ( int i = 0; i < operationsSize; i++ ) {
        sum = sum + record[i];
    }
    
    return sum;
}