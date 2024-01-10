#include <stdio.h>
#include <stdbool.h>


int len(const char input[]);
void concat(char result[], const char str1[], const char str2[]);
bool equals(const char str1[], const char str2[]); 

int main() {


    return 0;
}

int len(const char input[]) {
    int size = sizeof(*input) / sizeof(input[0]);
    return size - 1;
}

void concat(char result[], const char str1[], const char str2[]) {
    int i, j;

    for (i=0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    for(j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }

}

bool equals(const char str1[], const char str2[]) {
    if (len(str1) != len(str2)) {
        return false; 
    }
    int size = len(str1);

    for (int i = 0; i < size; i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true; 
}


