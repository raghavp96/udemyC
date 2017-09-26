#include <stdio.h>
// Assignment - 1, Section - 2.
/** Please read the instructions in the comment and 
	write the code accordingly. 
	This assignment will test your understanding with console input and output.
	Just in case if you do not know the meaning of the term 'console', we typically
	indicate it to mean keyboard and terminal. Input console indicates to keyboard and 
	output console indicates terminal.
	This will also test your ability to use variables.
*/	
int main(){
	// Please follow the instructions and write the code chronologically.
	//  1. Declare a double type variable named rate and assign 0.06 to it
	double rate = 0.06;

	//  2. Declare an integer variable, name it duration.
	int duration;

	//  3. Declare a double variable and name it principal_amount
	double principal_amount;	

	//  4. Declare a double variable and name it total_interest
	double total_interest;

	//  5. Prompt user to input duration in year. Read the year value in duration using 
	//	   scanf. Since duration is integer you must use %d.
	printf("Input the duration (an integer)\n");
	scanf("%d", &duration);

	//	6. Prompt user to input principal amount of loan. Read the value in the 
	//	   variable principal_amount. Think about the format specifier this time. 
	//	   principal_amount is not an integer, it is a double, so use the format specifier
	//	   of double.
	printf("Input the principal amount of loan (a double)\n");
	scanf("%lf", &principal_amount);

	//  7. Now you will calculate the total interest, if R is rate, D is duration and P 
	//	   is principal then the total interest should be calculated as follows:
	//		I = (P * D * R)
	//	   Use the above formula to calculate the total interest and finally print the 
	//     amount into the console. Your output should be like the following: 
	//	   Output: 
	//	   		Your total payable interest is $300.000000  		

	total_interest = principal_amount * duration * rate;
	printf("Your total payable interest is $%lf\n", total_interest);

	return 0;

}