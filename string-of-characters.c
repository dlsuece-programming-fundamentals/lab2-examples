#include <stdio.h>

int main(void) {
	//Declare a variable of data type 'char' which will be named as answer. Additionally, this variable can store 5 chars
	char answer[5];

	// Display something
	printf("Enter your surname: ");

	// %s is for strings
	//Note: String is a group of characters
	//Note: There is no & for string
	scanf("%s", answer);

	//Display something together with variables 
	// \n stands for New Line, aka. Enter Key
	printf("Hello %s!!! \n", answer);
	

	
	return 0;
}
