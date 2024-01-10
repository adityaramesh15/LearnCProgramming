#include <stdio.h>

int main() {
    int num = 15;
    int values[100];
    int *pValues = NULL;

    pValues = values; 
    pValues = &values[0]; // this is an equivalent method; 
    
    
    return 0;
}