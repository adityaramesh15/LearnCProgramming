#include <stdio.h>

int main(int argc, char *argv[]) {
    

    typedef char* ptr_char;

    int numArgs = argc; 
    ptr_char argOne = argv[0];
    ptr_char argTwo = argv[1];

    printf("Number of arguments, %d\n", numArgs);
    printf("Argument One is the program name: %s\n", argOne);
    printf("Argument Two is the command line argument: %s\n", argTwo);


    int a[]={1,2,3,4,5};
    int* b = a;
    printf("%d\n",*b);
    b++;
    printf("%d\n",*b);
    

    return 0;
}