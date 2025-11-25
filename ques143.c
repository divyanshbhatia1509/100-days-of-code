// Find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);

        while (getchar() != '\n');
    }

    struct Student topStudent = students[0];
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }

    printf("\nTop Student Details:\n");
    printf("Name: %s", topStudent.name);
    printf("Roll Number: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}