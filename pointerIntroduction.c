#include <stdio.h>
# include <stddef.h>

int main() {
    /*
    Convention dictates space between * and name is used in declaration
    No space when dereferencing.

    YOU DO NOT WANT AN UNINITIALIZED POINTER
    To assign to NULL, use <stddef.h>
    */
    int *pnumber = NULL; //this declares a pointer of type int
    char *pc = NULL;
    float *pf = NULL; 

    int number = 1215;
    int *pNew = &number;

    printf("%p", pNew);





    return 0;
}