#include <stdio.h>

// unary increment and decrement operator
// ++, --
int main() {
    int a = 5;
    int b = 10;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    a--;
    b--;
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    //post increment version
    int c = 5;
    int d = 10;
    printf("c: %d\n", c++);
    printf("d: %d\n", d--);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    // pre increment
    printf("c: %d\n", --c);
    printf("d: %d\n", ++d);

}