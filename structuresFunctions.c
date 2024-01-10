#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Family {
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

bool siblings(struct Family memberOne, struct Family memberTwo);
bool ptrSiblings(struct Family *memberOne, struct Family *memberTwo);
struct Family my_fun(void); //you can return a struct 

int main() {

    struct Family memberOne = {"Aditya", 19, "Ramesh", "Hema"};
    struct Family memberTwo = {"Dhiya", 8, "Ramesh", "Hema"};
    if(siblings(memberOne, memberTwo)) {
        printf("Siblings!");
    } else {
        printf("Not sibilings!");
    }

    if(ptrSiblings(&memberOne, &memberTwo)) {
        printf("ptr Siblings!");
    } else {
        printf("ptr Not sibilings!");
    }

    return 0;
}

bool siblings(struct Family memberOne, struct Family memberTwo) {
    if(strcmp(memberOne.mother, memberTwo.mother) == 0) {
        return true;
    }
    return false;
}

bool ptrSiblings(struct Family *memberOne, struct Family *memberTwo) {
    if(strcmp(memberOne->mother, memberTwo->mother) == 0) {
        return true;
    }
    return false;
}