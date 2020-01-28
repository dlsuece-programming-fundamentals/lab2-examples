#include <stdio.h>

int main(void) {
	//Declare a variable of data type 'char' which will be named as answer
	char answer;

	//Display something
	printf("Enter your letter: ");
	// %c is for characters
	scanf("%c", &answer);

	//Display something together with variables 
	// \n stands for New Line, aka. Enter Key
	printf("Hello %c!!! \n", answer);
	

	
	return 0;
}
