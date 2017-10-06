#include <stdio.h>

int main() {
    // lower case letter ASCII values start from 97; upper case from 65.
    // to convert upper case to lower case; just add 32

    char ch;

    printf("Enter an alphabet character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
        printf("The corresponding lower case letter is : %c\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        ch = ch -32;
        printf("The corresponding upper case letter is : %c\n", ch);
    } else {
        printf("The given character was not alphabetic\n");
    }

    return 0;
}