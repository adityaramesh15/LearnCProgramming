#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    /*
    strchr() and strstr() are used to search for given character/string respectively.
    strtok() tokenizes the string based off a delimiter
    islower(), isupper(), isdigit(), etc. to analyze and check strings
    */



    /*
    strchr()
    - takes in the address of the string to be searched as the first argument 
    - takes the character to be searched as the second

    returns a pointer to the first position where the char is found
    if not found, returns NULL
    */

    char str[] = "The quick brown fox";
    char ch = 'q';

    char *pGot_Char = NULL; //initializing the pointer to then assign the return of strchr() 
    pGot_Char = strchr(str, ch);

    /*
    strstr()
    - takes in the address of the string to be searched as the first argument 
    - takes the string to be searched as the second (IS CASE SENSITIVE)

    **If you dont want case sensitive, convert all characters using loop + toupper(); 

    returns a pointer to the first position where the found string begins
    if not found, returns NULL

    
    */
    char word[] = "The dog is barking";
    char phrase[] = "dog";

    char *pFound = NULL;
    pFound = strstr(word, phrase); //pointer refers to the address of the first occurece of the substring in the char array


    /*
    strtok() tokenizes a string
    - takes in teh string to be tokenized as first argument
    - accepts a string containing all the possibel delimitting characters.
    */
    char greeting[] = "hello-how-are-you-doing-today";
    const char delimiter[] = "-";
    char *token;

    token = strtok(greeting, delimiter);
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delimiter); //function maintains state data to knwo when NULL, look at the same string. 
    }

    token = strtok(greeting, delimiter); //grabs the first token

    /*
    converting strings
    need to #include <ctype.h>
    toupper() — from lower to upper
    tolower() — from upper to lower
    

    these are used on character basis, so to convert string, need to loop through char array
    */

    char name[] = "Aditya Ramesh";

    for (int i = 0; i < strlen(name); i++) {
        name[i] = (char)toupper(name[i]);
    }
    printf("%s\n", name);

    for(int i = 0; i < strlen(name); i++) {
        name[i] = tolower(name[i]);
    }
    printf("%s\n", name);

    
    


    return 0;
}