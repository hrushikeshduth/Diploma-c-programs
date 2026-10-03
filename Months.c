#include <stdio.h>

int main(){
int year;
printf("CHOOSE THE YEAR");
scanf("%d",&year);
//days for month storing
int J1,F1,F2,M1,A,M,J,JU,AU,S,O,
N,D;
J1=31;
F1=27;

M1=31;
A=30;
M=31;
J=30;
JU=31;
AU=31;
S=30;
O=31;
N=30;
D=31;
//leap year condition the previously defined februavalue gets overwritten by new value
if((year%4==0 && year%100!=0)|| year%400==0){
printf("it's a leap year\n");
F1=29;
}
else{
printf("it's not a leap year\n"); }
//switch case for checking year and month 
int month;
printf("enter your desired month number\n");
scanf("%d",&month);
switch(month){
	
case 1:
printf("it's january with %d days",J1);
	
break;	
case 2:
printf("it's february with %d days",F1);
break;
case 3:
printf("it's march with %d days",M1);
break;
case 4:
printf("it's April with %d days",A);
break;
case 5:
printf("it's May with %d days",M);
break;
case 6:
printf("it's june with %d days",J);
break;
case 7:
printf("it's July with %d days",JU);
break;
case 8:
printf("it's august with %d days",AU);
break;
case 9:
printf("it's september with %d days",S);
break;
case 10:
printf("it's October with %d days",O);
break;
case 11:
printf("it's November with %d days",N);
break;
case 12:
printf("it's December with %d days",D);
break;	
}




	
	
	
	
	
	
	
	
	
	
	
	
	





}
