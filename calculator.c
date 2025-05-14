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
float add(float a, float b) {
    // TODO: implement addition
}


#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUB, MUL, DIV };

int main() {
    enum Operation op;
    char operation[10];

    printf("Enter operation (add, sub, mul, div): ");
    scanf("%s", operation);

    // TODO: map operation to enum
    return 0;
}