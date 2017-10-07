#include <stdio.h>

// secret of scanf: scanf returns an int, representing the number of things
// it scanned


int main() {
    int x, y, i;

    printf("Enter two numbers: ");
    i = scanf("%d %d", &x, &y);

    printf("x = %d, y = %d, i = %d\n", x, y, i);
}