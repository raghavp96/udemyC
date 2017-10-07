#include <stdio.h>

// Casting; same as Java

int main() {
    int a = 5, b = 2;
    float r;

    r = a/b;  // integer division will make division result in 2; stored in float is just 2.000

    printf("r = %f\n", r); // prints 2.0000

    float r2;

    r2 = (float) a / b;
    printf("r2 = %f\n", r2); // prints 2.5


    return 0;
}