#include <stdio.h>

int main() {
    int y[3]; // called fixed type allocation - array can only have 3 elements

    // what if we want 'n' to be supplied by user?
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int x[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter element index %d\n", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < n; i++) {
        printf("x[%d] = %d \n", i, x[i]);
    }
}