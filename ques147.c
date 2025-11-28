// Store employee data in a binary file using fwrite() and read using fread().


#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp1, emp2;
    FILE *fp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp1.id);

    printf("Enter Name: ");
    scanf("%s", emp1.name);

    printf("Enter Salary: ");
    scanf("%f", &emp1.salary);

    fp = fopen("employee.dat", "wb");   
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nData written to binary file successfully.\n");

    fp = fopen("employee.dat", "rb");   
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&emp2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details Read From File ---\n");
    printf("Employee ID: %d\n", emp2.id);
    printf("Name: %s\n", emp2.name);
    printf("Salary: %.2f\n", emp2.salary);

    return 0;
}
