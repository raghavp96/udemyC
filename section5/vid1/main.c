#include <stdio.h>

// Arrays

int main() {
    int x[100]; //array is contiguous

    x[0]= 2;
    x[99] = 10;

    printf("First + Last: %d\n", (x[0] + x[99]));

    int i;
    printf("[\n");
    for (i = 0; i < 100; i++) {
        x[i] = i + 1;
        printf("\t%d \n", x[i]);
    }
    printf("]\n");
    return 0;

}