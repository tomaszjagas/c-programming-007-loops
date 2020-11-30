/************************************
* Description: Some play with loop if
*************************************/

#include <stdio.h>

int main() {
	int numberToTest, remainder;

	printf("Enter number to be tested: ");
	scanf_s("%d", &numberToTest);

	remainder = numberToTest % 2;

	if (remainder == 0) {
		printf("The number is even.\n");
	}
	else {
		printf("The number is odd.\n");
	}

	return 0;
}