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
if(choice==1){
	printf("enter the  kg");
	scanf("%f",&kilogram);
	pounds=kilogram*2.20462;
	printf("number of pounds = %2.f",pounds);
}
else if(choice==2){
	printf("enter the pounds");
	scanf("%f",&pounds);
	kilogram=pounds/2.20462;
	printf("number of kilograms = %2.f ",kilogram);
}
else{
	printf("pls enter valid choice you idiot");
}
return 0;
}

