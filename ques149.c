/*
Q149 (Enum)
Use malloc() to allocate structure memory dynamically and print details.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Define an enum for department */
typedef enum {
    CSE,
    ECE,
    MECH,
    CIVIL,
    UNKNOWN_DEPT
} Dept;

/* Convert enum value to readable string */
const char *dept_to_string(Dept d) {
    switch (d) {
        case CSE:  return "CSE";
        case ECE:  return "ECE";
        case MECH: return "MECH";
        case CIVIL: return "CIVIL";
        default:   return "UNKNOWN";
    }
}

/* Student structure containing an enum member */
typedef struct {
    int id;
    char name[100];
    Dept dept;
    float marks;
} Student;

int main(void) {
    Student *s = malloc(sizeof(Student));
    if (!s) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    /* Read ID */
    printf("Enter student ID: ");
    if (scanf("%d", &s->id) != 1) {
        fprintf(stderr, "Invalid input for ID\n");
        free(s);
        return 1;
    }
    /* consume leftover newline */
    int ch = getchar();
    while (ch != '\n' && ch != EOF) ch = getchar();

    /* Read name */
    printf("Enter student name: ");
    if (!fgets(s->name, sizeof(s->name), stdin)) {
        fprintf(stderr, "Failed to read name\n");
        free(s);
        return 1;
    }
    /* remove trailing newline if present */
    size_t ln = strlen(s->name);
    if (ln > 0 && s->name[ln - 1] == '\n') s->name[ln - 1] = '\0';

    /* Choose department */
    printf("Select department (enter number):\n");
    printf(" 0 - CSE\n 1 - ECE\n 2 - MECH\n 3 - CIVIL\nChoice: ");
    int dchoice;
    if (scanf("%d", &dchoice) != 1) {
        fprintf(stderr, "Invalid input for department\n");
        free(s);
        return 1;
    }
    switch (dchoice) {
        case 0: s->dept = CSE; break;
        case 1: s->dept = ECE; break;
        case 2: s->dept = MECH; break;
        case 3: s->dept = CIVIL; break;
        default: s->dept = UNKNOWN_DEPT; break;
    }

    /* Read marks */
    printf("Enter marks (float): ");
    if (scanf("%f", &s->marks) != 1) {
        fprintf(stderr, "Invalid input for marks\n");
        free(s);
        return 1;
    }

    /* Print stored details */
    printf("\n--- Student Details ---\n");
    printf("ID      : %d\n", s->id);
    printf("Name    : %s\n", s->name);
    printf("Dept    : %s\n", dept_to_string(s->dept));
    printf("Marks   : %.2f\n", s->marks);

    /* release memory */
    free(s);
    return 0;
}
