#include <stdio.h>

// Flushing problem when taking character input

int main() {
    char ch;
    int i, j;

    printf("Enter an integer: ");       // let's say you enter 25, followed by ENTER key
    scanf("%d", &i);                    // scanf gives value 25 to i, and the ENTER key is stored 
                                        // in the input buffer

    printf("Enter a character: ");      // Printf prints out
    scanf("%c", &ch);                   // scanf reads the next item in the input buffer, in this
                                        // case, the ENTER key, and assigns its ASCII to ch

    printf("Enter another integer: ");  // Then since ch has been assigned a value, printf prints
    scanf("%d", &j);                    // scanf takes in user input for the next value


    // HOW CAN WE CLEAR THE INPUT BUFFER? Check out the main2.c
    return 0;
}