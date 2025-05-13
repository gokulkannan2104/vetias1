
#include <stdio.h>

int main() {
    int a, b;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    
    if (b != 0) {
        printf("Division: %d / %d = %d\n", a, b, a / b);
        printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and Modulus by zero is not allowed.\n");
    }

    return 0;
}

