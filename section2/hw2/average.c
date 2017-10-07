/**
Instructions: 
Write a program that will input 3 integer values from user and then will 
display the average of them. You would require to declare 3 integer variables 
for holding the integers given by the users from keyboard and then you need 
another variable for holding the average. Decide by yourself about the datatype 
of the average variable.

Finally print the average into console using printf.
*/
#include <stdio.h>

int main()
{
    int i, j, k;

    printf("Enter first integer: ");
    scanf("%d", &i);
    printf("Enter second integer: ");
    scanf("%d", &j);
    printf("Enter third integer: ");
    scanf("%d", &k);

    float avg = (((float) i) + j + k) / 3;

    printf("The average is %f\n", avg);

	return 0;
}