#include <stdio.h>

int main(void) {
	//Declare variable of data type 'int' that has a name of answer
	int answer;
	//Declare variable of data type 'int' that has a name of next_week1
	int next_week1;
	//Declare variable of data type 'int' that has a name of next_week2
	int next_week2;
	//Declare variable of data type 'int' that has a name of next_week3
	int next_week3;
	//Declare variable of data type 'float' that has a name of next_week4
	float next_week4;
	//Declare variable of data type 'int' that has a name of next_week5
	int next_week5;

	//Display something
	printf("Enter your number: ");
	//Scanf is for getting an input from the user and store it to variable answer
	// %d is for integer
	scanf("%d", &answer);
	//Add then store it to next_week1	
	next_week1 = answer + 7;
	//Subtract then store it to next_week2	
	next_week2 = answer - 7;
	//Multiply then store it to next_week3	
	next_week3 = answer * 7;
	//Divide then store it to next_week4
	//Note: This is called floating-point division	
	next_week4 = answer / 7.0;
	//Get the remainder and store it to next_week5
	//Note: modulo only works if the two variables are integers. It doesn't work with float.	
	next_week5 = answer % 7;

	//Display something together with corresponding variables.
	//Note: \n stands for new line	
	printf("The sum is %d!!! \n", next_week1);
	printf("The difference is %d!!! \n", next_week2);
	printf("The product is %d!!! \n", next_week3);
	printf("The quotient is %f!!! \n", next_week4);
	printf("The remainder is %d!!! \n", next_week5);
	
	//No need for system("pause");

	return 0;
}
