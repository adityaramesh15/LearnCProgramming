#include <stdio.h>

int main() {
    int otherNumber = 25;
    int number = 100;
    /*
        CONSTANT VALUE:
        Below syntax means the value of number is constant and cannot change.
        IMPORTANT: the variable number can change. The pointer however is restricted from changing. 
        ALSO IMPORTANT: the pointer can change to a different memory address. 
    */

    
    const int *pvalue = &number; 
    //*pvalue = 1; will give an error since the value cannot be changed.
    number = 50; //variable can change.
    pvalue = &otherNumber; //pointer can change memory address. 


    /* 
        CONSTANT POINTER ADDRESS:
        Below syntax means that the memory address must stay constant and cannot change.
        IMPORTANT: the value can change through both the variable and the pointer, seeing as the memory address is the same.
    */
    int const *pvalue = &number;
    //pvalue = &otherNumber; will give an error since the memory addres canont be changed
    number = 500; //variable can change
    pvalue = 100; //value referenced at memory location can change as the memroy location is the same. 

    



    return 0;
}