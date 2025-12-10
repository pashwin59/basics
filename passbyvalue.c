#include <stdio.h>

void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    printf("a = %d", a);  
    return 0;
}



















// #include <stdio.h>

// void change(int *x) {
//     *x = 100;   // changes original value
// }

// int main() {
//     int a = 10;
//     change(&a);  // passing address of a
//     printf("a = %d", a);  // output: 100
//     return 0;
// }
