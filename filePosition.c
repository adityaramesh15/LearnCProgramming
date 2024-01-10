#include <stdio.h>

int main() {
    /*
        ftell();
        long ftell(FILE *ptr) - Specific char posiiton in the file
    */

    FILE *pfile = fopen("myfile.txt", "r");
    if(pfile == NULL) {
        return -1;
    }

    long position = ftell(pfile); //holds the starting position of the pointer, with value = to offset from beginning in bytes.
    printf("%ld\n", position); 

    fclose(pfile);
    pfile = NULL;

    /*
        fgetpos();
        int fgetpos(FILE *pfile, fpost_t *position);
            - first parameter is a pointer to your file.
            - second parameter is a pointer to a type defined by stdio.h

        stores the current position as well as the file state info. 
    */

    FILE *fptr = fopen("myfile.txt", "r");
    if(fptr == NULL) {
        return -1;
    }
    fpos_t here;
    int location = fgetpos(fptr, &here);
    printf("%d\n", location);

    fclose(fptr);
    fptr = NULL; 

    /*  
        fseek() — move position
        int fseek(FILE *pfile, long offset, int origin);
            - first parameter is the file.
            - second parameter is an offset to the reference point.
            - third parameter is one of the refrence points, being the following:
                - SEEK_SET : beginning of file
                - SEEK_CUR : current position in the file
                - SEEK_END : end of file

        For text files, you start wull always be SEEK_SET and then the offset of some amount.
    */

    FILE *ptr = fopen("myfile.txt", "r");
    if(ptr == NULL) {
        return -1;
    }
    fseek(ptr, 7, SEEK_SET); //This will move pointer position 7 bytes over from beginning

    fclose(ptr);
    fptr = NULL; 

    /*
        fsetpos();
        int fsetpos(FILE *pfile, fpost_t *position)
            - first parameter is a pointer to your file.
            - second parameter is a pointer to a type defined by stdio.h
    
    */


   
    return 0;
}