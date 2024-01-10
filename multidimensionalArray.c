#include <stdio.h>


int main() {

    int numbers[3][4] = {
        {1, 2, 3}, //4th value set to 0
        {2, 3, 4, 5},
        {3, 4, 5, 6}
    };

    int other[4][4] = {[0][0] = 1, [2][3] = 6};



    return 0;
}