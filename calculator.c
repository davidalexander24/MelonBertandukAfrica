#include <stdio.h>
#include <string.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

/**
 * Subtracts the second floating-point number from the first.
 *
 * @param a The number to subtract from.
 * @param b The number to subtract.
 * @return The difference between a and b.
 */
float subtract(float a, float b) {
    return a-b;

}

/**
 * Adds two floating-point numbers.
 *
 * @param a The first number.
 * @param b The second number.
 * @return The sum of a and b.
 */
float add(float a, float b) {
    return a + b;
}

/**
 * Multiplies two floating-point numbers.
 *
 * @param a The first number.
 * @param b The second number.
 * @return The product of a and b.
 */
float multiply(float a, float b) {
    return a * b;
}

/**
 * Divides the first floating-point number by the second.
 *
 * @param a The dividend.
 * @param b The divisor.
 * @return The quotient of a divided by b, or 0.0 if b is zero.
 * @note If b is zero, an error message is printed and 0.0 is returned.
 */
float divide(float a, float b) {
    if (b == 0.0) {
        printf("Error: Division by zero is not allowed\n");
        return 0.0;
    }
    return a / b;
}

enum Operation { ADD, SUB, MUL, DIV };

int main() {
    enum Operation op;
    float a, b, result;
    char operation[10];

    printf("Enter operation (add, sub, mul, div): ");
    scanf("%s", operation);

    if (strcmp(operation, "add") == 0) {
        op = ADD;
    } else if (strcmp(operation, "sub") == 0) {
        op = SUB;
    } else if (strcmp(operation, "mul") == 0) {
        op = MUL;
    } else if (strcmp(operation, "div") == 0) {
        op = DIV;
    } else {
        printf("Invalid operation\n");
        return 1;
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case ADD:
            result = add(a, b);
            break;
        case SUB:
            result = subtract(a, b);
            break;
        case MUL:
            result = multiply(a, b);
            break;
        case DIV:
            result = divide(a, b);
            break;
    }

    printf("Result: %.2f\n", result);
    return 0;
}