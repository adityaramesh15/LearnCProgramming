#include <stdio.h>

int main() {
    int c;
    int lines = 0;


    FILE *pfile = fopen("fileChallengeText.txt", "r");
    if(pfile == NULL) {
        return -1;
    }
    
    while((c = fgetc(pfile)) != EOF) {
        if(c == '\n') {
            lines++;
        }
    }

    printf("%d", lines + 1);

    fclose(pfile);
    pfile = NULL;
    
    return 0;
}