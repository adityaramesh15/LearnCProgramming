#include <stdio.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount; //stores quantity * price
};

void readItem(struct item *ptr);
void printItem(struct item *ptr);

int main() {
    struct item myItem;
    readItem(&myItem);
    printItem(&myItem);
    
    return 0; 
}

void readItem(struct item *ptr) {
    printf("\nProduct name: ");
    ptr->itemName = (char *)malloc(20);
    scanf("%s", ptr->itemName);

    printf("\nPrice: ");
    scanf("%f", &(ptr->price)); 
    
    printf("\nQuantity: ");
    scanf("%d", &(ptr->quantity));

    ptr->amount = ptr->price * ptr->quantity;
}

void printItem(struct item *ptr) {
    printf("\nProduct %s has price %.2f. With quanitity of %d, the amount is %.2f", ptr->itemName, ptr->price, ptr->quantity, ptr->amount);

}