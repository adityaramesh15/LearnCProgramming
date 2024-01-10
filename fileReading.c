#include <stdio.h>

int main() {
    int c;
    // fgetc() — reads a character from an open file.
    char *name = "myfile.txt";
    FILE *pfile = fopen(name, "r");
    if (pfile == NULL) {
        printf("Failed");
        return 1;
    }

    while ((c = fgetc(pfile)) != EOF) {
        printf("%c", c);
    }
    printf("\n");
    fclose(pfile);
    pfile = NULL;


    /*
        fgets — reads a string from an open file
        char *fgets(char *str, int nchars, FILE *stream);
            - first argument where the string is to be copied to. 
            - second argument is the number of characters
            - third argument is the file pointer

        characters are read until either '\n' or n-1 characters have been read (whichever comes first).
        if '\n' is read, it is retained in teh string and '\0' is added to the end

        fgets returns pointer and populates the first parameter.
        if error or EOF, NULL returned
    */

    FILE *filePtr = fopen("myfile.txt", "r");
    if(filePtr == NULL) {
        perror("failed");
        return 1;
    }
    char str[100]; //where the read string will go.

    fgets(str, 100, filePtr); //This will collect a string to either 100 characters or newline.
    printf("\n%s", str);

    /*          
        while(fgets(str, 100, filePtr) != NULL) {
            printf("%s", str);
        }

        Thiss will print out every line until EOF which is NULL.
    */

    fclose(filePtr);
    filePtr = NULL; 


    /*
        int fscanf(FILE *stream, const char *format); 
        This is for reading input that is formatted with some delimiter or type of sort in a file.

        Function returns the number of items succesfully matched and assigned.
    */

    FILE *newFilePtr = fopen("myfile.txt", "r");
    char str1[10], str2[10], str3[10], str4[10];
    fscanf(newFilePtr, "%s %s %s %s", str1, str2, str3, str4);
    printf("The scanned strings are: \n%s\n%s\n%s\n%s", str1, str2, str3, str4);

    return 0;
}