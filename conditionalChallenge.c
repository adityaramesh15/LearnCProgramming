#include <stdio.h>
#define PAYRATE 12.0

int main(int argc, char *argv[]) {
    unsigned int time;
    float grossPay = 0.0;
    float taxes = 0.0; 
    float netPay = 0.0;

    printf("How many hours do you work in a week?\n");
    scanf("%d\n", &time); 

    if (time < 40) {
        grossPay += PAYRATE * time;
    } else if (time > 40) {
        grossPay += PAYRATE * 40;
        grossPay += PAYRATE * ((time - 40) * 1.5);
    }

    if (grossPay <= 300) {
        taxes += grossPay * 0.15;
    } else if (grossPay > 300 && grossPay <= 450) {
        taxes += 300 * 0.15;
        taxes += (grossPay - 300) * 0.20;
    } else {
        taxes += 300 * 0.15;
        taxes += 150 * 0.20;
        taxes += (grossPay - 450) * 0.25;
    }

    netPay = grossPay - taxes; 
    

    printf("Gross Pay: %f, Taxes: %f, Net Pay: %f\n", grossPay, taxes, netPay);

    return 0;
}