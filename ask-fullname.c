#include <stdio.h>

int main(void) {
    //Declare a variable of data type 'char' which will be named as name. This is how you declare a string
    //Additionally, this string can store 20 chars
    char name[20];

    // Display something
    printf("What is your name?");

    // %s is for strings
	//Note1: String is a group of characters
	//Note2: There is no & for string
    //Note3: These cryptic symbols provides you an ability to get name with space bar in between.
    scanf(" %[^\n]s",name);

    //Display something together with variables 
	// \n stands for New Line, aka. Enter Key
    printf("Hello %s!!! :)",name);

    return 0;
}