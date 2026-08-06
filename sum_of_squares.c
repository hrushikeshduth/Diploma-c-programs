#include <stdio.h>
int main()
{
int i,total_product;//i is the couter variable
//total_product is the variable tonupdate square each loop
//total_sum=is the accumulating variable it keeps getting accumulated and gives sum 

int total_sum;
total_sum=0;
for(i=1;i<=10;i++)
{
	
total_product=i*i;

total_sum+=total_product;


}
printf("the sum is %d\n",total_sum);
return 0;
}

