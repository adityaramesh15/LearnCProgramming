#include <stdio.h>

int main(int arc, char *argv[]) {
    int age; 
    int num = 0;

    printf("What is your age?");
    do {
        scanf("%d\n", &age);
        printf("%d\n", num);
        num++;
    } while (num <= age);
    

    return 0;
}