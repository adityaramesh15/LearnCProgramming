#include <stdio.h>

int main(int argc, char *argv[]) {

    int foo = 7, value = 3;
    
    if (foo == 6) {
        printf("hooray!");
    } else if (foo == 7) {
        printf("yas");
    } else {
        printf("Sad");
    }

    return 0;
}