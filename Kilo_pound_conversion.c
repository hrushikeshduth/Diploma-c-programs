#include<stdio.h>
int main()
{
int choice;
float kilogram,pounds;
kilogram=0;
pounds=0;

printf(" if you want to convert from kg to pounds then press 1 if not press 2\n");
printf("enter your choice 1 or 2\n");
scanf("%d",&choice);

for(int i = 1; ;i++ )
{
if(choice !=1 && choice != 2)
{
	printf("pls enter valid choice you idiot\n");
	printf("enter your choice 1 or 2\n");
	
	/* My Logic: When we enter a character, scanf gets confused because we used an int format specifier (%d). 
	It rejects the input but keeps it somewhere in its 'bag' (buffer). During the next loop, that character 
	still remains, causing an infinite loop. This statement tells the program to grab characters from the 
	scanf bag and remove them. We check for '\n' because the loop needs a 'stop sign' once the bad input line ends! */
	while(getchar() !=  '\n');
	
	scanf("%d",&choice);
	continue;
}
	
else if(choice==2){
	printf("enter the pounds: ");
	scanf("%f",&pounds);
	kilogram=pounds/2.20462;
	printf("number of kilograms = %.2f \n",kilogram); // Fixed to %.2f
	break;
}
else{
	printf("enter the kg: ");
	scanf("%f",&kilogram);
	pounds=kilogram*2.20462;
	printf("number of pounds = %.2f\n",pounds); // Fixed to %.2f
	break;
}
}
return 0;
}

