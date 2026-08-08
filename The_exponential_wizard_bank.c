#include <stdio.h>
int main()
{

//day counter remains stable 
//ruppe counter is multiplied to 2 
int day=1;
int r = 1;

while(r<=1000)
//the value of rupee is doubled every like  hence we should keep rupee the loop runs till the rupee reaches 1000
{

	
	r = r * 2;
	day++;
}
printf("the day:%d rupee value is : %d",day, r );
return 0;
}
	
