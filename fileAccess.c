#include <stdio.h>

int main() {
    /*
        File can be accessed and referred to using a file pointer
        The maximum number of files that can be open is FOPEN_MAX in stdio.h

        You first associate an external file with an internal pointer via the fopen() function. 
        FILE *fopen(const char* restrict name, const char* restrict mode); is the syntax

        First argument is the name of the file (can be written explicitly, or assigned to a char* which is then passed in).
        Second argument is a string that represents mode (what you want to do with the file — read, write, append, etc.). 

        If succesful a pointer called FILE* will be available to rerefrence in other IO functions. 
        If unsuccesfull, NULL is returned. 
    */

   /*
        READ WRITE MODES
        r - read only
        w - truncate and write (delete everything and start from beginning). If file DNE, file will be created.
        a - keep content and write from end

        r+ - read and write
        w+ - truncate and write (delete everything and start from beginning) but also be able to read. If file DNE, file will be created.
        a+ - keep content and write from end while also being able to read content. 
   */

    //WRITE MODE:
    FILE *pfile = NULL;
    char *name = "myfile.txt"; //Need to specifiy full path if outside current file.
    pfile = fopen(name, "w"); //Opens myfile.txt to write to it, erasing any prior content on it.
    if (pfile == NULL) {
        printf("File: %s has failed to open", name);
        return 1;
    }

    fprintf(pfile, "This is a new added message which should have wiped existing content.");
    fclose(pfile);

    //APPEND MODE:
    pfile = fopen(name, "a"); //reopens myfile.txt to write to it, getting ready to append to it. 
    if (pfile == NULL) {
        printf("File: %s has failed to open", name);
        return 1;
    }

    fprintf(pfile, "\nThis is a new added message which should have been added to the existing content.");
    fclose(pfile);

    //READ MODE:
    pfile = fopen(name, "r");
    if (pfile == NULL){
        printf("File: %s has failed to open", name);
        return 1;
    }

    //RENAME: (file cannot be open while you do this)
    /*
        char *newName = "newFile";
        if (rename(name, newName)) {
            printf("Failed");
        } else {
            printf("Success!");
        }
    
        Not going to actually do this since previous functions would break after running once, but code example is valid.
    */

   //DELETE
   /*
        // No need to use the file pointer.
        // File cannot be open when doing this.
        remove("myfile.txt");   
   */
    
    return 0;
}