// Return a structure containing top student's details from a function.


#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex]; 
}

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student top = getTopStudent(s, n); 

    printf("\n--- Top Student Details ---\n");
    printf("Name  : %s\n", top.name);
    printf("Roll  : %d\n", top.roll);
    printf("Marks : %.2f\n", top.marks);

    return 0;
}
