#include <stdio.h>

int main(void) {
	//Declare variable of data type 'int' that has a name of answer
	int answer;

	//Scanf is for getting an input from the user and store it to variable answer
	// %d is for integer	
	scanf("%d", &answer);

	//Display something together with corresponding variables.
	// %d is for integer	
	//Note: \n stands for new line
	printf("Hello %d!!! \n", answer);
	
	
	return 0;
}
