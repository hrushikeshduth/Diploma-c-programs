// quadratic equation 
#include <stdio.h>
#include <math.h>
int main(){
int a,b,c;
printf("enter the values for a b c if ax^2+bx+c");
scanf("%d %d %d",&a,&b,&c);
double x,y,value;
//if equation meets the following condition

value=(b*b)-(4*a*c);

if(value==0){

printf("roots are equal");

	
	
	
}
else if(value>0){
	
printf("roots are distinct and real\n ");

x=(-b+sqrt(value))/2*a;
y=(-b-sqrt(value))/2*a;
printf("The roots are %lf %lf",x, y);

	


	
}

else{
	
printf("roots are imaginary");	
}
return 0;						}		
	
	

