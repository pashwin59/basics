
// Write a program to read N students record store them in data file and display the content in
// appropriate format by using fprintf and fscanf function.
#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    int rollNo;
    char name[50];
    float marks;
    
    // Get number of students
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    // Write student records to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("\n--- Enter Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &rollNo);
        printf("Name: ");
        scanf("%s", name);
        printf("Marks: ");
        scanf("%f", &marks);
        
        // Write to file using fprintf
        fprintf(fp, "%d %s %.2f\n", rollNo, name, marks);
    }
    fclose(fp);
    printf("\nRecords saved successfully!\n");
    
    // Read and display student records from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("\n========================================\n");
    printf("        STUDENT RECORDS\n");
    printf("========================================\n");
    printf("Roll No\t\tName\t\tMarks\n");
    printf("----------------------------------------\n");
    
    // Read from file using fscanf
    while (fscanf(fp, "%d %s %f", &rollNo, name, &marks) != EOF) {
        printf("%d\t\t%s\t\t%.2f\n", rollNo, name, marks);
    }
    
    printf("========================================\n");
    fclose(fp);
    
    return 0;
}