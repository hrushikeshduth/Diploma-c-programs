//* Day 12: Create a program that takes an integer score (0–100). Convert it to a grade letter using a switch-case only (no if statements).


#include<stdio.h>
int main(){
int integer;
printf("Create a program that takes an integer score (0–100)\n");
scanf("%d",&integer);
integer/=10;
//it cuts of the score in small number this logic is used in sum of digits also
switch(integer){
case 10:
printf("grade is A1");
break;
case 9:
printf("grade is A2");
break;

case 8:
printf("grade is B1");
break;
case 7:
printf("grade is B2");
break;
case 6:
printf("grade is B2");
break;
case 5:
printf("grade is F");
break;
case 4:
printf("grade is F");
break;

case 3:
printf("grade is F");
break;
case 2:
printf("grade is F");
break;
case 1:
printf("grade is F");
break;

	
	
	
	
	
	
	
	
	
	
	
return 0;
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

