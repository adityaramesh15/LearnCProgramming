#include <stdio.h>

int main(){ 
    int number = 150;
    int *pnumber = NULL;

    pnumber = &number;
    printf("%p\n", &pnumber);
    printf("%p\n", pnumber);
    printf("%d\n", *pnumber);

    return 0;



}
