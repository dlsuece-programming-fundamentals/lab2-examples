#include <stdio.h>

int main(void) {
	//Declare a variable of data type 'float' which will be named as answer
	float answer;

	// %c is for flating points
	scanf("%f", &answer);

	//Display something together with variables
	// %.2f means floating point for up to decimal places after the decimal point
	// \n stands for New Line, aka. Enter Key
	printf("Hello %0.2f!!! \n", answer);
	
	return 0;
}
