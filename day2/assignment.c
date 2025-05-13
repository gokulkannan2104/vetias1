#include <stdio.h>

int main() {
    int a = 10, b = 20;

    // Using assignment operator '='
    a = b; // Assign the value of 'b' to 'a'
    printf("After a = b, a: %d\n", a);

    // Using compound assignment operators
    a += 5; // Equivalent to a = a + 5
    printf("After a += 5, a: %d\n", a);

    a -= 3; // Equivalent to a = a - 3
    printf("After a -= 3, a: %d\n", a);

    a *= 2; // Equivalent to a = a * 2
    printf("After a *= 2, a: %d\n", a);

    a /= 4; // Equivalent to a = a / 4
    printf("After a /= 4, a: %d\n", a);

    a %= 3; // Equivalent to a = a % 3
    printf("After a %%= 3, a: %d\n", a);

    return 0;
}

