#include <stdio.h>

int main() {
    printf("%d\n", printf("Hello")==printf("Hello")); // Output: HelloHello1
    printf("%d\n", printf("Angel")!=printf("Daemon")); // Output: AngelDaemon1
    return 0;
}