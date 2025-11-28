// Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {

    struct Student s;        
    struct Student *ptr;     

    ptr = &s;                

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", ptr->roll);
    printf("Name        : %s\n", ptr->name);
    printf("Marks       : %.2f\n", ptr->marks);

    return 0;
}
