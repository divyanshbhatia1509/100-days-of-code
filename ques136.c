/*🧱
Q136 (Enum)
Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations
 using switch.*/
#include <stdio.h>

// Define the enum for the menu choices
enum Operation {
    ADD = 1, 
    SUBTRACT, 
    MULTIPLY
};

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int choice, num1, num2, result;

    // Display menu options
    printf("Select an operation:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Get two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operation based on the user's choice
    switch (choice) {
        case ADD:
            result = add(num1, num2);
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case SUBTRACT:
            result = subtract(num1, num2);
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case MULTIPLY:
            result = multiply(num1, num2);
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
            break;
    }

    return 0;
}
