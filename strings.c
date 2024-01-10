#include <stdio.h>


int main(){

    char hello[11] = "Hello World";
    printf("%s\n", hello);

    char copy[100];
    printf("Please enter your name");
    scanf("%s", copy); //scanf will stop recording a string after a space — If name is Aditya Ramesh, scanf only collects Aditya
    printf("\n\n%s", copy); 



    return 0;
}
