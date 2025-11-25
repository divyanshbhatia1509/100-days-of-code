// Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum Color {
    RED = 10,
    GREEN,
    BLUE
};
int main() {
    printf("RED: %d\n", RED);
    printf("GREEN: %d\n", GREEN);
    printf("BLUE: %d\n", BLUE);
    return 0;
}