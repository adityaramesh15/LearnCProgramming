#include <stdio.h>
#include <stdlib.h>


struct time {
    int hour;
    int minute;
    int second; 
};

struct date {
    int month;
    int date;
    int year;
};

struct dateAndTime {
    struct date sdate;
    struct time stime;
};

struct intPtrs {
    int *ptrOne;
    int *ptrTwo;
};


int main() {
    
    struct date *otherDatePtr = NULL;
    struct date *datePtr = NULL;

    struct date todaysDate = {12, 26, 2023};
    datePtr = &todaysDate; //if an initialized structure already exists, you can just assign its memory address to the pointer.
    otherDatePtr = (struct date *)malloc(sizeof(struct date)); //this is if no initialzed structure exists.
    (*datePtr).date = 27; //you can then acces memebrs of the struct by dereferencing and then change values; 

    /*
        For structures there exists a special operator to remove the cumbersome dereferencing syntax
        Instead of foing *ptr.member, you can do ptr->member, assuming ptr is  referencing a struct.
    */
    datePtr -> date = 27;

    //Below gives the same result, but -> is easier
    printf("The date is %d\n", (*datePtr).date);
    printf("The date is %d\n", datePtr -> date);


    //Structures can also have pointers that are members
    struct intPtrs pointers; //here pointers is not a pointer itself, but the name of a structure variable holding two int pointers.
    int i1 = 100, i2;
    pointers.ptrOne = &i1;
    pointers.ptrTwo = &i2;
    *pointers.ptrTwo = 97;

    printf("%d", i2); //This will equal 97.

    

    return 0; 
}