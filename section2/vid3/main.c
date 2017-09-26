#include <stdio.h>

int main() {
	int var; // if we declare a variable, and provide no value, the compiler does not automatically give it a zero value. The data is just garbage.
	
	var = 45;  // variable's value, 45, is saved in memory in binary. 
	printf("var in decimal = %d\n", var); // prints var as we see it in decimal
	printf("var in octal = %o\n", var); // prints var as we see it in octal
	printf("var in hexadecimal= %x\n", var); // prints var as we see it in hexadecimal


	int var1 = 056; // create int var1, with value 56 (in octal). prefix 0 = zero -> octal

	printf("var1 in decimal = %d\n", var1);
	printf("var1 as is in octal = %o\n", var1);
	printf("var1 in hex = %x\n", var1);

	int var2 = 0xa; // initialize var2 in hex with value a. '0x' means hex
	
	printf("var2 in decimal = %d\n", var2);
	printf("var2 as is in octal = %o\n", var2);
	printf("var2 in hex = %x\n", var2);

	return 0;
}