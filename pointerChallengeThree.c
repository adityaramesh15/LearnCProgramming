#include <stdio.h>


int len(const char *ptr);

int main() {
    char name[] = "aditya";
    int length = len(name);
    printf("%d", length);

    return 0;
}

int len(const char *ptr) {
    int length = 0;
    
    
    while (*ptr != '\0') {
        length++;
        ++ptr; 
    }
    

    return length;
}
