#include <stdio.h>

int main (int arvc, char *argv[]) {

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    int c = a & b; // 0000 1100
    int d = a | b; // 0011 1101
    int e = a ^ b; // 0011 0001
    int f = ~a;    // 1100 0011
    int g = a << 2; // 0011 0000 1100 -> multiplying by 2^2
    int h = a >> 2; // 0011 0000 -> dividing by 2^2


    // 0000 1010
    // 0000 0101

    unsigned int x = 10; 
    unsigned int y = 5;
    x = ~x;
    y = ~y;

    printf("%u\n", x);
    printf("%u\n", y);
    return 0;
}