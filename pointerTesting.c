#include <stdio.h>

int main() {
    char name[] = "Dhiya";
    char *pname = NULL;

    pname = name;
    printf("%s\n", name);
    printf("%s\n", pname);
    printf("%c\n", *pname); //prints me char 1 of Dhiya which is D
    printf("%c\n", *(pname + 1)); //prints me char 2 of Dhiya which is h
    printf("%c\n", *pname + 1); //prints me the + 1 ASCII value of char 1 of Dhiya which is D + 1 which is E


    printf("\n\n");
    
    char newName[20];
    char *pInput = newName;
    printf("What is your name? \nName: ");
    scanf("%s", pInput);

    printf("\nYour name is %s", pInput);


    /*
    You dont want to ever assign a pointer a value that does not have memory address (basically never assign a literal)
    int *ptr = NULL;
    ptr = 5; HUGE MISTAKE since pointer does not have any memory allocated to it. 

    A good way to prevent any issues is do

    if(!ptr) {

    }

    this means if the pointer is not null or 0, do x,y,z....etc. 
    */



    return 0;
}