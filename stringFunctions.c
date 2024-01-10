#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Aditya";

    int length = strlen(name);
    printf("%d", length);


    /*
    strcpy is used to copy strings from source to destination
    Arguments are as follows: (where your copying to, string that is being copied)
    NOT SAFE THOUGH
    strcpy does not check if the source memory is greaters than the destination memory    
    */
    char src[50], des[50];
    strcpy(src, "This is source"); 
    strcpy(des, "This is destination");


    /*
    safer alternative for copying is strncpy
    arguments are: (destination, source, size of memory input)
    you can restrict only x amount of bytes to be inputed — most commonly sizeof(destination)
    */
    char newDes[5] = "  ";
    //strcpy(newDes, "Hello my name is Aditya") would have an overflow error
    strncpy(newDes, "Hello my name is Aditya", sizeof(newDes));
    printf("%lu", sizeof(newDes));





    /*
    This is for concatenating two strings
    second argument gets added to the first and the first string is returned. 
    */
    char destination[50] = "hello, ";
    char source[] = " World";

    strncat(destination, source, sizeof(destination) - strlen(destination) - 1);
    printf("\nNew string is: %s", destination);


    char current[28] = "This is my name:      ";
    char input[80];
    printf("What is your name? ");
    scanf("%s", input);
    

    strncat(current, input, (sizeof(current) - strlen(current) - 1));
    printf("\n\n\n\n%s", current);

    /*
    using == compares the addresses — not the content
    strcmp makes up for that
        - Does not compare arrays, so can be any size
        - Does not compare characters, so "apple" and "A" are valid, but "apples" and 'A' is not

    0 is equal
    less than is 0 is this is str1 less than str2
    greater than 0 is str2 is greater than str1

    COMPARISON IS ASCII, so "Z" is less than "a"

    It compares each char one by one, so O^N complexity
    */

    strcmp("A", "A"); // 0
    strcmp("A", "B"); // Less than 0
    strcmp("B", "A"); // Less than 0

    //strncmp restricts how many chars are looked at.
    strncmp("astrowizard", "astroworld", 5); //this will return 0 as it only compares first 5 bytes of either — useful for prefix checks



    return 0; 
}