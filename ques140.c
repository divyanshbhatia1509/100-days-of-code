// Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

void printPersonGender(struct Person p) {
    switch (p.gender) {
        case MALE:
            printf("%s is Male.\n", p.name);
            break;
        case FEMALE:
            printf("%s is Female.\n", p.name);
            break;
        case OTHER:
            printf("%s is Other.\n", p.name);
            break;
        default:
            printf("Unknown gender for %s.\n", p.name);
    }
}

int main() {
    struct Person person1 = {"Alice", FEMALE};
    struct Person person2 = {"Bob", MALE};
    struct Person person3 = {"Charlie", OTHER};

    printPersonGender(person1);
    printPersonGender(person2);
    printPersonGender(person3);

    return 0;
}