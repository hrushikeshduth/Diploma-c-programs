#include <stdio.h>
int main()
{
char input;
printf("enter the character");

// we use char for to print alphabetical value

scanf(" %c",&input);

//then we print its number value by using %d 
// we used two inputs because two format specifiers

printf("the ascii value of %c is %d",input,input);
return 0;
}

	
