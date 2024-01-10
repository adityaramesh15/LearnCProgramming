#include <stdio.h>
#include <stdlib.h>

int main() {


    int *pNumber = (int*)malloc(100); //allocates 100 bytes of heap memory that is casted to int*
    free(pNumber); //releases the memory
    pNumber = NULL; //set to NULL to signiify pointer is no longer pointing to anything. 

    int *pNumber = (int*)malloc(25 * sizeof(int)); //accomodate 25 ints worth of memory
    if (!pNumber) {
        //code to deal with mem failure since malloc returns 0 if not enough memory left;
    }

    int *pValue = (int*)calloc(25, sizeof(int)); //calloc initializes all the values to 0 unlike malloc
    int *pValue = (int*)realloc(pValue, 25 * sizeof(int)); //preserves contents of original memory, but now adds more if needed. 


    free(pValue);
    free(pNumber);
    return 0;
}
