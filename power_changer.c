#include <stdio.h>
int main()
{
int i;//here i declared counter variable 
int  term ;
//here i declared the variable to store power term

//i used for loop i as counter which increases 1 at every loop first loop incrememnt is skipped

for(i=1;i<=10;i++)
{
	term=1;//term can be written outside but the value of term keeps getting updated 
	term+=i;
	
	
	
	printf("x^%d+%d \n",term,i);
}

return 0;
}
	
