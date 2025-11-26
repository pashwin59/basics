#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data d;

    d.i = 10;       // Step 1
    d.f = 20.5;     // Step 2 (overwrites i)

    printf("i = %d\n", d.i);   // i is now corrupted
    printf("f = %f\n", d.f);   // only f is valid

    return 0;
}
