#include <stdio.h>
// when we call we should declare the character and count which we will use 

void charprint(char alpha,int count){
	alpha ='*';
	//it keeps running loop until the number becomes small enough as 0
//it prints * and after printing the star is printed
while(count>=1){

	
printf("%c",alpha);

count--;	

}
}
int main(){
char symbol;
int count=0;

printf("enter the number stars you want to print");
scanf("%d",&count);

charprint( symbol, count);
//when we call we should not use data types we should use only in arguemen

return 0;
}
