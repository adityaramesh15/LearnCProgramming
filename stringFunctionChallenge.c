#include <stdio.h>
#include <string.h> 

int main() {
    char input[100];
    printf("Input a string: ");
    fgets(input,100,stdin);
    //input[strcspn(input, "\n")] = 0;
    printf("size of input: %d\n",sizeof(input));

    char destination[100];

    int k=0;
    for (int i = strlen(input) - 2; i >= 0; i--) {
       // printf("%d\n",i);
        //printf("%c",input[i]);
        destination[k++]=input[i];
        //printf("%s",destination);
    }
    destination[k]='\0';

    printf("output = %s\n", destination);

    return 0;
}


