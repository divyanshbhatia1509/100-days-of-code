// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};
int main() {
    enum TrafficLight light;

    // Example usage
    light = RED;
    if (light == RED) {
        printf("Stop\n");
    } else if (light == YELLOW) {
        printf("Wait\n");
    } else if (light == GREEN) {
        printf("Go\n");
    }

    light = YELLOW;
    if (light == RED) {
        printf("Stop\n");
    } else if (light == YELLOW) {
        printf("Wait\n");
    } else if (light == GREEN) {
        printf("Go\n");
    }

    light = GREEN;
    if (light == RED) {
        printf("Stop\n");
    } else if (light == YELLOW) {
        printf("Wait\n");
    } else if (light == GREEN) {
        printf("Go\n");
    }

    return 0;
}
