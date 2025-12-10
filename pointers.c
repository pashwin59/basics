#include <stdio.h>

int main() {
     int a = 10;
    int *p = &a; 

    printf("Value of a = %d\n", a); // print value of a
    printf("Address of a = %p\n", &a);
   
    return 0;
}