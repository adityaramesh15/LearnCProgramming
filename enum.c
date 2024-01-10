#include <stdio.h>
#include <stdbool.h>

int main() {
    enum primaryColor { red, yellow, blue}; 
    enum primaryColor myColor = red, gregsColor = blue;

    enum direction { up, down, left = 10, right}; //up = 0, down = 2, left = 10, right = 11
    // every value is +1 the previous one

    // define enum & create variable of enum type
    enum gender {male, female};
    enum gender myGender = male; 
    enum gender anotherGender = female; 
    printf("%d\n", myGender);
    printf("%d\n", anotherGender);

    bool isMale = myGender == anotherGender; // returns false

    char newLine = '\n';
    printf("%c", newLine);

    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company first = XEROX;
    enum company second = GOOGLE;
    enum company third = EBAY;

    printf("%d\n", first);
    printf("%d\n", second);
    printf("%d\n", third);

    return 0;
}