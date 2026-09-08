#include <stdio.h>
int isLeap(int year){
	
if(year%4==0 &&year%100!=0|| year%400==0){

return 1;
}
else{
return 0;
	
	
}

	
	
	
}
	
	
	


int main(){
int year;
printf("enter the year\n");
scanf("%d",&year);

year=isLeap(year);

if(year==1){
	
printf("it's is leap year");
	
	
}
else{
	
printf("it's isnt leap year");	
	
}
return 0;
}
