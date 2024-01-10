#include <stdio.h>
void square(int *x);

int main() {
    int num = 5;
    square(&num);
    printf("\n%d", num);

    return 0;
}

void square(int *x) {
    *x *= *x;
    printf("%d", *x);
    return;
}
