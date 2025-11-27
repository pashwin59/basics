#include <stdio.h>

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    union Data d;

    d.i = 10;

    d.f = 20.5;
    printf("%f\n", d.f);
        printf("%d\n", d.i);


    d.ch = 'A';
    printf("%c\n", d.ch);

    return 0;
}
