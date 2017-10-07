#include <stdio.h>

// The secret of printf

int main() {
    int i;
    i = printf("%Hello");  // printf returns an int representing the number of characters it prints

    printf("%d\n", i);  // print 5

    return 0;
}