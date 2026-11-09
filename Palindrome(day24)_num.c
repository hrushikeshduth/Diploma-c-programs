#include <stdio.h>
int main()
{
int actualnumber,last_digit=0,number;
printf("enter a number to check whether its palindrom or not \n");
scanf("%d",&actualnumber);
number=actualnumber;
int reveresenum=0;
//formula to find true reversed number is --
//running number = (running number x 10) + last digit;
while(number>0){
//isolate
last_digit=number%10;







	
reveresenum=(reveresenum * 10)+last_digit;





//peel
number=number/10;




}
printf("%d\n",reveresenum);

if(actualnumber==reveresenum){
printf("it's a palindrome");
	
}
else{
printf("it is not a palindrome");
}
}



//every single palindrome number must start and end with the exact same digit.
//the biggest hurdle i faced while coding this is first normally we reverse a number directly with printf by isolating last digits each term but the issue they  overwrite the value each time loop runs the previous value of reversed number gets over for refererence to what I mean just check reversing_a_number.c file for reference to understand my actual is to form a number of reversed numbet like store in a variable for that theres a specific mathematical operation I figured out it is like reversed number = (reversed number * 10) + last digit also make sure to declare reversed number as 0 before the loop now each time the digits are isolated and peel the digits form a actual reversed number stored in a variable i hope you understood:
//rest all is just simple flow control and definition of palindrome like actual number should be equal to reversed number as simple as that i could say this was tough but fun 
