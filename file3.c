#include <stdio.h>

int main() {
    FILE *fptr;
    char text[50];

    fptr = fopen("file.txt", "r");
    fread(text, sizeof(char), 50, fptr);

    printf("File content: %s\n", text);

    fclose(fptr);
    return 0;
}
