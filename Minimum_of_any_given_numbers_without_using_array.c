#include <stdio.h>
int count=1;
int main(){
int number;
printf("\nenter the number:");
scanf("%d",&number);
int min;
min=number;
while(count<=2){
	
printf("\nenter the number:");
scanf("%d",&number);
if(number<min){
min=number;
	
}	
count++;	
	
}


printf("the minimum of the numbers is %d",min);

return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	


	
	
	
	
	
	
	
	
	
	
	
	
