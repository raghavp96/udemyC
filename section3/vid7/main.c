#include<stdio.h>

// single line conditional operator (can be nested as well) - if else -> ? :

int main() {
    int a = 10, b = 20, m;
    // if (a > b) {
    //     m = a + b;
    // } else {
    //     m = a - b;
    // }

    // ^ equivalent of that
    m = (a>b)? a+b : a-b;

    printf("%d\n", m);
}