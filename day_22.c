#include <stdio.h>
int main()
{
int i=0;
int N;
int previous=0;

int sum=1;

printf("enter the value of N:");
scanf("%d",&N);

while(i<=N){



//in each interaction the value of future(sum) present(i) past(previous) gets shifted like example 3 boys passing a ball 1 boy first gets a ball gives it to 2 boy next gives it boy 3 simuntaneoulsy boy one would get a new ball the boys are variables and ball is value
previous=i;
printf(" %d",previous);
i=sum;
sum=previous+i;





	

	
	
	
	
	
	
}
	
	
	
	
	
	
	
	
	
return 0;	
	

	
		
				
	
}
