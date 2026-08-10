#include <stdio.h>
int main ()
{
	int n,a;
	a = 0;
	//here we add input statemnt in while.loop only because it will add and ask random value each time so now we get our desired result
	while(1)//while condition is always true loop will continuosly run it will keep registring values until the break condition is triggerd it calculates teh final sum of given values
	{
		printf("pls enter a number");
		scanf("%d",&n);
		
		if (n>0)
		{
			break;
			
		}
		
		a+=n;
		
		
	}
	printf("\nthe total sum is %d", a);
	
	return 0;
}
		
		
		
		
	
