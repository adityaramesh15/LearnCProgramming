#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double width = atof(argv[1]), height = atof(argv[2]), perimeter, area; 

    perimeter = 2.0 * width + 2.0 * height;
    area = width * height; 

    printf("%.1lf, %.1lf, %.1lf, %.1lf\n", width, height, perimeter, area);

    return 0;
}