#include <stdio.h>
int main()

{
int a , b;
double sum;
printf("enter the values");
scanf("%d%d", &a , &b);
sum = a + b; //here even though the a and b variables are stored in int and sum is in double 
//when we tell computer to perform the operation of sum a and b the computer automatically changes the value of a + b to double for eg 5  +  6 = 11 according to integers 
//even tho the a and b are int since sum is storrd in double it will print in double

printf("the sum is %lf",sum);

	
}