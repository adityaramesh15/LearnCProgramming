#include <stdio.h>
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


/*
struct dateAndTime {

    int month;
    int date;
    int year;
    struct time {

        int hour;
        int minute;
        int second; 

    };
};

This is just as valid, except for the issue of the struct time being inaccesible alone — better to declare struct outside and call within.

*/


int main() {
    struct dateAndTime adityaBirthday;

    adityaBirthday.sdate.month = 12;
    adityaBirthday.sdate.date = 15;
    adityaBirthday.sdate.year = 2004;
    
    adityaBirthday.stime.hour = 1;
    adityaBirthday.stime.minute = 28;
    adityaBirthday.stime.second = 36;

    printf("Date: %02d/%02d/%04d\n", adityaBirthday.sdate.month, adityaBirthday.sdate.date, adityaBirthday.sdate.year);
    printf("Time: %02d:%02d:%02d\n", adityaBirthday.stime.hour, adityaBirthday.stime.minute, adityaBirthday.stime.second);

    struct dateAndTime dhiyaBirthday = {{9, 28, 2015}, {12, 31, 14}};
    printf("Date: %02d/%02d/%04d\n", dhiyaBirthday.sdate.month, dhiyaBirthday.sdate.date, dhiyaBirthday.sdate.year);
    printf("Time: %02d:%02d:%02d\n", dhiyaBirthday.stime.hour, dhiyaBirthday.stime.minute, dhiyaBirthday.stime.second);

    return 0;
}