#include <stdio.h>

// Dealing with Characters

int main() {
	char ch = 'A';
	printf("Character is %c\n", ch);

    printf("Enter a character: ");
    char another;
    // scanf("%c", &another);
    another = getchar(); // functionally equivalent to above
    printf("You typed: %c\n", another);

    return 0;
}