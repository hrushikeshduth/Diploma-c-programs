//Day 19: Create a loop that keeps accepting numbers. Stop immediately if the user types a negative number. Print the sum of all positive numbers entered.
#include <stdio.h>
int main(){
int num=0;
int sum=0;
while(1){
scanf("%d",&num);
if(num>=0){
printf("you entered a positive number\n");
sum=sum+num;
continue;
}
else{
	
printf("you entered an invalid number\n");
break;	
	
}

	
	
	
	
	
		
			
				
					

	


}	
	
	
printf("is the sum of positive numbers entered is  %d\n",sum);	
	
return 0;	
	
	
	
	
	
	
	
	
	
	
	
}
