#include <stdio.h>

void swap(int x, int y);
void newSwap(int *a, int *b);
void constantSwap(const int *m, int *n);

int main() {

    // This is pass by value, so x and y will not change outside the scope of the function. 
    int x = 5;
    int y = 10;
    printf("%d, %d\n", x, y);
    swap(5, 10);
    printf("%d, %d\n", x, y);


    // This is pass by reference, so x and y will be changed, given the memory address is outside scope of function. 
    int a = 20;
    int b = 40;

    int *aPtr = &a;
    int *bPtr = &b;
    printf("%d, %d\n", a, b);
    newSwap(aPtr, bPtr);
    printf("%d, %d\n", a, b);

    // When passing by reference, you can make the pointer constant to sepcify fucntion wont change the value outside local scope
    int m = 100;
    int n = 200;
    printf("%d, %d\n", m, n);
    constantSwap(&m, &n);
    printf("%d, %d\n", m, n);

    return 0;
}

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

    return;
}

void newSwap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    return;
}

void constantSwap(const int *m, int *n) {
    int temp = *m;
    // *m = *n; Will not swap since value @ memory location is constant;
    *n = temp;

    return;
}

