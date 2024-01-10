#include <stdio.h>

int main() {
    /*
        - First I am assigning an integer to have value 10 with variable name count
        - Then I am assigning a pointer to point to the memory address of count
        - Finally, I am using * to dereference the pointer to grab the value of the memory address which had been assigned to the pointer

        The whole structure is largely simple. 
        - A VARIABLE is a named storage location for a value.
        - That location has a memory address which refers to said value
        - We use a variable to have a callable name for said memory address. 
    
        - A POINTER is a variable that stores the memory address of another variable.
        - What this means is that using a pointer, a value can be dereferenced using *
        - As such, should 8 be attatched to a pointer (memory address), its value will be shown


    
    */

    int count = 10, x;
    int *int_pointer = NULL; 

    int_pointer = &count;
    x = *int_pointer;
    printf("count = %d, x = %d\n", count, x);



    int value = 1215;
    int *pvalue = &value;

    printf("%d\n", *pvalue); //the use of * dereferences the pointer to give the value
    printf("%p\n", &value);  //this is the raw memory address of the value refered to by the pointer
    printf("%p\n", &pvalue);  //this is the memory address of the pointer itself, which holds the value of another memory address. 

    printf("%lu", sizeof(pvalue)); //This shows how many bytes the pointer is holding.




    return 0;
}