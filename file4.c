#include <stdio.h>

int main() {
    FILE *fptr = fopen("files4.txt", "r");

    fseek(fptr, 5, SEEK_SET);  // move to 5th byte from start
    // fseek(fptr, 10, SEEK_CUR);

    
//     fseek(fptr, 0, SEEK_END);
// long size = ftell(fptr);   // tells the file size
// printf("File size: %ld bytes\n", size);



    char ch = fgetc(fptr);
    printf("Character at position 5: %c\n", ch);
    

    fclose(fptr);
    return 0;
}
