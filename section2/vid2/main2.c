#include <stdio.h>

int main() {
	int aVar;
	printf("Type an integer, followed by ENTER key.");

	scanf("%d", &aVar);	// tells scanf we are expecting an integer 
				// and that we want to store it in aVar, 
				// scanf has no idea where aVar is, because aVar is local to the main
				// scanf has no knowledge of local things -> &aVar gives scanf the
				// ADDRESS of aVar in memory

	printf("The value is %d\n", aVar);
	return 0;
}