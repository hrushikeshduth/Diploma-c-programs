#include <stdio.h>
#include <stdbool.h>
//ternary operator 
int main(){
//ex:1
int a=5;
int b=7;
int max=(a>b)? a: b;
printf("%d is greater\n",max);
//ex:2 using bool 
// make it consciese in printf %s statement 
bool isOnline= true;
printf("%s\n",(true)? "online" : "offline");
//ex:3 to know whether it is even or odd
int number=21;
printf("%d is %s \n",number,(number%2==0)? "even": "odd");

//ex:4 age checker
int age=18;
printf("%s ",(age>=18) ? "you are eligible to vote" : "you are ineligible to vote");
	
//hour am and pm 
// with pointer	
int hour=16;
int minutes=17;
const char *meridian=(hour>=12) ? "PM" :"AM";
printf("%d:%02d %s",hour,minutes,meridian);

	
	
	
	
	
	
	
}
