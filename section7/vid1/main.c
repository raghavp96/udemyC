#include <stdio.h>

// Intro to functions; consider parameters, return type

double getSimpleInterest(double principal, double rate, double time) {
    double interest;
    interest = (principal * rate * time) / 100;
    return interest;
}

int main() {
    double p, r, t, i;
    printf("Enter the principal amount: \n");
    scanf("%lf", &p);

    printf("Enter the rate of interest: \n");
    scanf("%lf", &r);

    printf("Enter the duration: \n");
    scanf("%lf", &t);

    i = getSimpleInterest(p, r, t);
    printf("%lf\n", i);

    return 0;
}