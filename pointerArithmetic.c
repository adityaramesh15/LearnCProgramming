#include <stdio.h>

int arraySum(int array[], int size);

int main () {
    int values[] = {2, 4, 6, 8, 10, 12};
    int *pvalues = values; 

    printf("%d\n", *(pvalues + 3)); //This will point to the 4th elememnt in the array


    /*
    To iterate through each element in an array, pointer++ or pointer-- can be used to move up or down
    IMPORTANT: Be aware of the bounds as to avoid an array-out-of-bounds exception error. 
    */


    int difference = (pvalues + 3) - pvalues;
    printf("%d\n", difference);

    int sum = arraySum(values, 6);
    printf("%d\n", sum);


    




    return 0;
}

int arraySum(int array[], int size) {
    int sum = 0;
    int *ptr = NULL;
    int *arrayEnd = array + size;

    for (ptr = array; ptr < arrayEnd; ptr++) {
        sum += *ptr;
    }

    return sum;
}