#include <stdio.h>
#include <string.h>

struct date {
    int month;
    int date;
    int year;
};

struct month {
    int numOfDays;
    char name[3]; //can add an array to a struct.
};

int main() {
    /*
        Structures eliminate the need for many repeating variables given multipel instances (i.e people, cars, etc.)
        Combining with arrays allows for many structure instances to be grouped together (students in a classroom, cars in a parking lot)
    */

    struct date myDates[10]; //this creates an array of 10 dates, with each 3 members. 30 data elements total.

    //Can individually access each struct element and assign data
    myDates[0].month = 11;
    myDates[0].date = 10;
    myDates[0].year = 1979;

    myDates[1] = (struct date) {12, 15, 2004}; 


    struct date newDates[8] = {{12, 15, 2004}, {9, 28, 2015}, {11, 10, 1979}, {11, 25, 1978}}; //remaining structs are uninitialized. 
    struct date newerDates[5] = {[2] = {12, 15, 2004}}; //can specifiy exact element if wanted.
    struct date newNewerDates[5] = {[1].date = 15, [1].month = 12}; //can specifiy specific members with an exact element. 

    struct month january;
    january.numOfDays = 31;
    strncpy(january.name, "JAN", 3); //need to do this since string cannot be reassigned from null to JAN without strncpy.

    struct month february = {28, {'F', 'E', 'B'}}; //This is another way to do this.

    return 0;
}