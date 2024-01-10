#include <stdio.h>

int main() {

    /*
        Below are members/fields of a struct
        Any type of data can go in here including pointers
        This is just a declaration — No memory is allocated.
     */
    struct date {
        int month;
        int day;
        int year;
    };

    /*
        Examples of declaration — each can hold three values as defined above. 
        Memory is allocated upon declratation, given the three inner members/fields are now declared
        If the inner member was a pointer, malloc would have to be done first though to get memory allocation.
    */
    struct date today;
    struct date purchaseDate;

    printf("size allocated for struct: %lu\n", sizeof(today)); //result is 12 —> 3 * 4 bytes.

    //Dot operator for member assignment;
    today.day = 26;
    today.month = 12;
    today.year = 2023;

    printf("The month is %d", today.month);

    //Expressions follow all regular rules.
    today.day += 1; //changes ths day to 27.
    int newDay = today.day / 100 + 1; //random example.



    //You can declare the structure and the variable at the same time. 
    struct person {
        int age; 
        int height;
        char *name;
    } aditya = {19, 66, "Aditya"}; //This allows me to create an instance of this struct immediately. Remember, all declarations must CONSTANTS

    struct person hema = {.name = "Hema", .age = 44, .height = 64}; //Can be in any order using dot operator
    struct person ramesh = {45, 56}; //Value can be left blank
    struct person dhiya = {.age = 8, .name = "Dhiya"}; //can skip around and omit at the same time



    //This is an unamed struct, which is to be used if given a declaration(s) immediately. (because there is no tag to modify lateron)
    struct {
        char *brand;
        char *model;
        int milesDriven;
    } adityaCar = {"Subaru", "Outback", 55000}, hemaCar = {"Volvo", "XC90", 15000}; //all declarations must be here


    //Given an initial declaration ALREADY HAPPENED, you can do a compound literal assignment to change all values at once. 
    today = (struct date) {9, 25, 2015};


    return 0;
}