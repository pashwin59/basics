#include <stdio.h>

int main(){
    //file handling in c
    FILE *fptr;  //file pointer // why this
    fptr = fopen("files.txt", "w"); //open file in write mode
    fprintf(fptr, "Hello, Worlds!\n"); //write to file
    fclose(fptr); //close file
    return 0;


}