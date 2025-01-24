#include <stdio.h>
#include <string.h>

/* Functions */
int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Returning 0 as a safe value
    }
}

int main() {
    int choice, num1, num2, res;
    char wh_choice[10]; // To store user's "yes" or "no" response

    do {
        printf("Basic Calculator\n");
        printf("Select Operator:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter 1st Number: ");
        scanf("%d", &num1);

        printf("Enter 2nd Number: ");
        scanf("%d", &num2);

        if (choice == 1) {
            res = add(num1, num2);
            printf("The Result is: %d\n", res);
        } else if (choice == 2) {
            res = sub(num1, num2);
            printf("The Result is: %d\n", res);
        } else if (choice == 3) {
            res = multiply(num1, num2);
            printf("The Result is: %d\n", res);
        } else if (choice == 4) {
            res = divide(num1, num2);
            printf("The Result is: %d\n", res);
        } else {
            printf("Invalid choice! Please select a valid operator.\n");
        }

        printf("Do you want to continue calculations? (yes/no): ");
        scanf("%s", wh_choice); // Read user input

    } while (strcmp(wh_choice, "yes") == 0 || strcmp(wh_choice, "YES") == 0);

    printf("Exiting the calculator. Goodbye!\n");
    return 0;
}
