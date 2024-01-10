#include <stdio.h>

int main(int argc, char *argv[]) {
    int s1 = sizeof(int);
    int s2 = sizeof(char);
    int s3 = sizeof(long);
    int s4 = sizeof(long long);
    int s5 = sizeof(double);
    int s6 = sizeof(long double);

    printf("%zd, %zd, %zd, %zd, %zd, %zd\n", s1, s2, s3, s4, s5, s6);
    
    return 0; 
}