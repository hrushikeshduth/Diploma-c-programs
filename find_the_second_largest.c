#include <stdio.h>
int main()

{
int a,b,c;
printf("enter the values");
scanf("%d%d", &a , &b , &c);
if(a>b && a<c)
{
	printf("the 2nd largest is %d",a);
}
else if (c>a && c<b)
{
printf("the 2nd largest largest is %d",c);
}
else 
{
	printf("the second largest is %d",b);
}

return 0;

	
	
}