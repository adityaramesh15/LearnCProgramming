#include <stdio.h>

int main(int argc, char *argv[]) {

    for (int i = 0, j = 1; i < 5; ++i, j = j* 2) {
        printf("%3d %3d\n", i, j);
    }

    return 0;
}