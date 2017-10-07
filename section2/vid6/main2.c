#include <stdio.h>

// Clearing input buffer to avoid flushing problem when taking character input

int main() {
    char ch;
    int i, j;

    printf("Enter an integer: ");       // let's say you enter 25, followed by ENTER key
    scanf("%d", &i);                    // scanf gives value 25 to i, and the ENTER key is stored 
                                        // in the input buffer

    printf("Enter a character: ");      // Printf prints out
    scanf(" %c", &ch);                  // scanf sees the space, which essentially clears the input buffer, and 
                                        // waits for user input and assigns input to ch

    printf("Enter another integer: ");  // Then since ch has been assigned a value, printf prints
    scanf("%d", &j);                    // scanf takes in user input for the next value



    return 0;
}