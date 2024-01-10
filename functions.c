#include <stdio.h>
#include <stdlib.h>

int gcd(unsigned int numOne, unsigned int numTwo);
float abs(float input);
float sqrt(float input);

int main(int argc, char *argv[]) {
    // if an array is passed to a function, you need to pass an argument giving its size.


    return 0; 
}


int gcd(unsigned int numOne, unsigned int numTwo) {
    unsigned int result;

    while (numTwo != 0) {
        unsigned int temp = numTwo;
        numTwo = numOne % numTwo;
        

    }



    return result; 
}

float abs(float input) {
    if (input >= 0) {
        return input;
    } else {
        return -1.0 * input; 
    }
}

float sqrt(float input) {


    return 0.0;
}