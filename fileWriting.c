#include <stdio.h>

int main() {
    /*
        fputc() — simplest operation, writes a single char to a text file. 
        int fputc(int ch, FILE *pfile);
            - first argument is the char value as an ASCII Integer.
            - second argument is the file pointer

        If succesful returns anything other than EOF
        Same as putc() effectively.
    */

    FILE *pfile = NULL;
    pfile = fopen("characterWriting.txt", "w+"); //will truncated every time

    for(int ch = 65; ch < 91; ch++) {
        fputc(ch, pfile); //prints out ASCII 65-91 which is capital alphabet.
    }

    fclose(pfile);
    pfile = NULL;


    /*
        fputs() — writes a string to a text file.
        int fputs(const char* str, FILE *pfile);
            - first argument is the string to write to the file
            - second argument is the file pointer
    
        This function DOES NOT input \0 at the end of the string, so can complicate read backs of the file.
    */

    FILE *fp = NULL;
    fp = fopen("stringWriting.txt", "w+");
    if(fp == NULL){
        return -1;
    } 

    fputs("Hello this is an inputted message.", fp); 
    fputc('\0', fp); //Have to manually add the null terminator.
    fputs("testing new line fucntionality", fp); //fputs does not add to a new line unless you add '\n' excplicitly


    fclose(fp);
    fp = NULL;

    /*
        fprintf() — formatted output like printf 
        int fprintf(FILE *pfile, const char *format)
        
        same as printf except you specify file. 
    */

    FILE *fptr = NULL;
    fptr = fopen("printWriting.txt", "w+");
    if(fptr == NULL) {
        return -1;
    }

    int age = 19;
    char *name = "Aditya";

    fprintf(fptr, "I am %d years old.\nMy name is %s.", age, name);

    fclose(fptr);
    fptr = NULL;
    return 0;
}