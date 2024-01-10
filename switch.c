#include <stdio.h>

int main(int argc, char *argv[]) {

    enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum Day today = Saturday;

    switch(today) {
        case Monday: 
            printf("It's Monday");
            break; 
        case Tuesday: 
            printf("It's Tuesday");
            break;
        case Wednesday: 
            printf("It's Wednesday");
            break;
        case Thursday:
            printf("Its Thursday");
            break;
        case Friday:
            printf("Its Friday");
            break;
        default:
            if (today == Saturday) {
                printf("Saturday");
            } else {
                printf("Sunday");
            }
            break;
    }

    return 0;
}