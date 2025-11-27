#include <stdio.h>

// creating struct using typedef
typedef struct {
    int roll;
    float marks;
} Student;

int main() {
    Student s1;  // no need to write struct

    s1.roll = 10;
    s1.marks = 85.5;

    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
