//calculate sum of any given 5 numbers using do while loop
#include <stdio.h>

int i=0;//counter so that it takes only five numbers 
int main()
{
	
int numbers;
int sum=0;
do{
printf("enter a number ");
scanf("%d",&numbers);
sum=sum+numbers;

i++;

}while(i<5);

printf("sum of given five numbers is %d",sum);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
