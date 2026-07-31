#include <stdio.h>
int main()
{
int a,b,c,sum;
float average;

printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
sum = a + b+c;
average = (a+b+c)/2;

printf("the sum is : %d the average is: %f ", sum,average);

return 0;


	
}