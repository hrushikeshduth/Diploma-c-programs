#include <stdio.h>
int main()
{
	int i,total_sum;
	total_sum=0;//this is bucket variable
	//it stores values like now i is counter
	for(i=1;i<=100;i++)
	{
	
	
	total_sum+=i;
	}
	printf("the total sum is %d",total_sum);
	
	return 0;
}
	
