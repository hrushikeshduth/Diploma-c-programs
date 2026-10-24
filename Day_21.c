/*Day 21: Take any integer (e.g., 4529) and print it completely reversed (9254) mathematically using / and %.
*/
#include <stdio.h>
int main(){
int integer;
int reverse=0;
printf("enter the integer");
scanf("%d",&integer);
while(integer>0){
	
reverse=integer%10;
printf("%d",reverse);
integer=integer/10;	
	
	
	
	
	
}
	
	
	
	
	
	
	
	
}
