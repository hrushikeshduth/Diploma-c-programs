#include <stdio.h>
//currency program
int main()
{
	
int notes=0;
int amount;
printf("\nenter the amount greater than 0:");	
scanf("%d",&amount);

while(amount>0){

notes=amount/100;
amount=amount%100;
printf("100 rupee notes=%d",notes);
notes=amount/50;
amount=amount%50;
printf("\n50 rupee notes=%d",notes);
notes=amount/20;
amount=amount%20;
printf("\n20 rupee notes=%d",notes);
notes=amount/10;
amount=amount%10;
printf("\n10 rupee notes=%d",notes);
notes=amount/5;
amount=amount%5;
printf("\n5 rupee notes=%d",notes);
notes=amount/2;
amount=amount%2;
printf("\n2 rupee notes=%d",notes);
notes=amount/1;
amount=amount%1;
printf("\n1 rupee notes=%d",notes);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
