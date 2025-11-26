#include <stdio.h>

// function to calculate area
int area(int length, int width) {
    return length * width;
}

int main() {
    int l, w;

    printf("Enter length: ");
    scanf("%d", &l);
//scan means read input from keyboard
//%d means we are reading an integer value.

//lThe variable where the input will be saved.
//&lAddress of l.

    printf("Enter width: ");
    scanf("%d", &w);

    int result = area(l, w);   // function call

    printf("Area of Rectangle = %d\n", result);

    return 0;
}
