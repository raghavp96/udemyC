#include <stdio.h>

int main() {
    int num;

    printf("How many neigbhors does Pupeta have? Enter a number between 0-8, inclusive:");
    scanf("%d", &num);

    if (num < 0 || num > 8) {
        printf("Invalid number of neighbors.\n");
    } else if (num == 0) {
        printf("Sad and will force you to listen to his story, will make you late.\n");
    } else if (num == 1) {
        printf("He will ask you to deliver half of the pizza to his only neighbor, you may be late.\n");
    } else if (num >= 2 && num <= 5) {
        printf("Will have great mood and will be singing song. May crack joke as well. You will get good tips, definitely.\n");
    } else if (num == 6 || num == 8) {
        printf("Too angry and furious, deliver the pizza and leave ASAP.\n");
    } else {
        printf("He will be making great drink for his neighbors and will invite you to taste. But will not give you tip.\n");
    }

    return 0;
}