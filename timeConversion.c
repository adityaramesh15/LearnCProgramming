#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double minutes = atof(argv[1]);
    double days = minutes / (60.0 * 24.0);
    double years = days / 365.0;

    printf("Minutes: %f.4\n", minutes);
    printf("Days: %f.4\n", days);
    printf("Years: %f.4\n", years);

    return 0; 
}