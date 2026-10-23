/*Day 20: Take an integer input and count how many digits it contains using a while loop.
*/
#include <stdio.h>
int main(){
int integer=0,digit=0;


printf("enter the value of integer");	
scanf("%d",&integer);

while(integer>0){
integer=integer/10;
printf("%d\n",integer);
digit++;

}
	
printf("%d",digit);
	
	
	
	
	
	
	
	
	
	
	
	
	
}
	
	
	
	
	
	
	

