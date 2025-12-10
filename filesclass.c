#include <stdio.h>

int main(){
    
    FILE *fptr;  
    fptr = fopen("class12.txt", "w"); 
    fprintf(fptr, "Hello, class 12!\n"); 
    fclose(fptr); 
    return 0;

}

