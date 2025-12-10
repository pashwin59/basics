#include <stdio.h>

struct Customer {
    int account_number;
    char name[50];
    char address[100];
};

int main() {
    struct Customer c[10];   // Array of 10 customers

    printf("Enter details of 10 customers:\n");

    // Input section
    for (int i = 0; i < 10; i++) {
        printf("\nCustomer %d:\n", i + 1);

        printf("Enter Account Number: ");
        scanf("%d", &c[i].account_number);
 // 0 vanek first index ko first customer ko ho ??
        printf("Enter Name: ");
        scanf("%s", c[i].name);  
        printf("Enter Address: ");
        scanf("%s", c[i].address);  
    }

    printf("\nDetails of 10 customers:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nCustomer %d:\n", i + 1);
        printf("Account Number: %d\n", c[i].account_number);
        printf("Name: %s\n", c[i].name);
        printf("Address: %s\n", c[i].address);
    }

    return 0;
}
