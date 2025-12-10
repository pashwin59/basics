#include <stdio.h>

int main() {
    FILE *fptr = fopen("fwrite.bin", "w");

    char text[] = "Hello fwrite!";

    fwrite(text, sizeof(char), sizeof(text), fptr);
 
    fclose(fptr);

    return 0;
}


//data = pointer to data you want to write
//size = size of each element to write
//count = number of elements to write