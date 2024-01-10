#include <stdio.h>

int main(){
    int values[10];
    int testArray[4] = {1, 2, 4, 6};
    int secondArray[10] = {1, [2] = 2, 3,  4, [7] = 8, 9, 10}; 
    /****
        after designated initialization, next values follow n + 1 index
        1 0 2 3 4 0 0 8 9 10
    ****/ 

    for (int i = 0; i < 10; i++) {
        printf("Enter value number %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", secondArray[i]);
    }


    return 0; 
}
