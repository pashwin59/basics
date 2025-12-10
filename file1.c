#include <stdio.h>

int main(){
    //file handling in c
    FILE *fptr;  //file pointer for file handling
    fptr = fopen("files.txt", "a"); //open file in write mode
    fprintf(fptr, "Hello, Worlds!\n"); //write to file
    fclose(fptr); //close file
    return 0;


}

