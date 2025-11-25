// Print all enum names and integer values using a loop.
#include <stdio.h>
enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};

const char* colorNames[] = {
    "RED",
    "GREEN",
    "BLUE",
    "YELLOW",
    "ORANGE"
};

int main() {
    int numColors = sizeof(colorNames) / sizeof(colorNames[0]);
    for (int i = 0; i < numColors; i++) {
        printf("%s = %d\n", colorNames[i], i);
    }
    return 0;
}