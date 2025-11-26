
struct class{
    int id;
    char a;

};

#include <stdio.h>  
int main() {
    struct class c1;
    c1.id = 101;
    c1.a = 'A';

    printf("ID: %d\n", c1.id);
    printf("Character: %c\n", c1.a);

    return 0;
}
