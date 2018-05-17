#include <stdio.h>

// Prototype or Signature of a function

// Cannot place the function definition after it has been called
double getSimpleInterest(double principal, double rate, double time) {
    double interest;
    interest = (principal * rate * time) / 100;
    return interest;
}

// we can PROTYPE the function, so that when gcc compiles, it sees that a function with this signature
// will be defined, and then we can define the function later

double getSimpleInterest2(double, double, double);

int main() {
    double i = getSimpleInterest(1000.0, 5.0, 2);
    double j = getSimpleInterest2(1000.0, 5.0, 2);
    printf("i: %f\n", i);
    printf("j: %f\n", j);
    return 0;
}

double getSimpleInterest2(double principal, double rate, double time) {
    double interest;
    interest = (principal * rate * time) / 100;
    return interest;
}