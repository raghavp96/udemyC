#include <stdio.h>

// Dealing with Characters, ASCII values

int main() {
    char ch = 'A';

    printf("%d\n", ch); // pritns ASCII value of ch    
    printf("%c\n", ch); // prints character ch


    int i = 65;
    for (i = 65; i < 91; i++) {
        printf("%d\n", i); // prints int i as int
        printf("%c\n", i); // prints int i as char
    }
    
    return 0;
}