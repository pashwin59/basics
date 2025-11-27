
struct class{
    int id;
    char a;

};

#include <stdio.h>  
int main() {
    struct class c1;
   
scanf("%d %c", &c1.id, &c1.a);
    printf("ID: %d\n", c1.id);
    printf("Character: %c\n", c1.a);

    return 0;
}
