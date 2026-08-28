#include <stdio.h>
int main()
{
int constant;
int variable;
int sum;
int N;
int sign;
printf("enter the value of constant");
scanf("%d",&constant);
printf("enter the value of N");

scanf("%d",&N);
sign=1;
sum=0;
variable=1;
for(;variable<N;){
sum=sum+(sign*variable);
variable=variable*constant;
sign = sign*-1;	
	
	
	
}
printf("the total is %d",sum);
return 0;
}

	
	
	
	
	
	
	
	
