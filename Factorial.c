#include <stdio.h>
int main()
{
	int fact,product;
	product=1;
	int i;
	
	printf("enter the value");
	scanf("%d",&fact);
	
	//i value  changes so ill write it in loop
	
	for( i=1; i<=fact;i++)
	{
	product=product*i;
	//in first loop it simply prints product 1 remqins same yhe increment gets skipped 2nd loop i is 2 product value gets updated to 2 and so on
	
	 
	
	
		
	}
	
	printf("the factorial of the number is  %d!",product);
	return 0;
}
