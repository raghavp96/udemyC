#include <stdio.h>

// relational operators. I'm skipping doing demos for simple concepts from now on.

int main() {
    // ==  -> returns 1 or 0, true or false
    int a, b, i, j;

    a = 100;
    b = 20;
    i = a > b;
    j = b > a;

    printf("i = %d\n", i);
    printf("j = %d\n", j);

}