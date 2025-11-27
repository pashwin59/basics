#include <stdio.h>

int main() {
    int a = 10;

    int *ptr;     // declaring pointer
    ptr = &a;     // storing address of a

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Pointer ptr stores: %p\n", ptr);
    printf("Value using pointer: %d\n", *ptr);

    return 0;
}
