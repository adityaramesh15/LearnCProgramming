#include <stdio.h>
#include <stdlib.h>

int main() {
    char *input = NULL;
    int length = 0;

    printf("Enter characters in string: ");
    scanf("%d", &length);
    input = (char*)malloc(length * sizeof(char)); //char is one anways so shouldn't matter much. 

    if (input != NULL) {
        printf("\nEnter a string: ");
        scanf("%s", input);

        printf("\nThe inputted string is: %s", input);
    }

    free(input);
    input = NULL;
    return 0;
}
