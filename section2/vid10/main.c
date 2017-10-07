#include <stdio.h>

// Assignment operator: variable = value or variable = variable
// value cannot be assigned a variable

int main() {
    int x;
    // will not compile
    10 = x;

    printf("x = %d\n", x);
    return 0;
}