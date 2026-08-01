#include <stdio.h>
int main()

{
int a,b;
printf("enter the value ");
scanf("%d%d",&a,&b);
if(a%2==0 && b%2==0)
//perfectly equal means == or in if statement we have to use ==
{
	printf("it as an even number yay! ",a,b);
}
//else is also same but it dosent have to write  condition 
else {
printf("its not an even number booo!",a,b);
}
return 0;



	
	
}