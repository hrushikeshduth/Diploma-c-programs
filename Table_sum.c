#include <stdio.h>
int main()
{
int number,i,total_product;
printf("enter the number");
scanf("%d",&number);
//here i declared a term for number
//number is for example the term is x * y = z 
//x is the number it remains cinstant throughout so i dint add in loop
//next i is y that in x * y = z i is the term that changes throughout so we add + to it 
//and now z is total_product 
//so in printf we declare x into y = z number x i = total_product
for( i=1;i<=10;i++)
{

total_product=i*number;
printf("%d   x %d  = %d\n",number,i,total_product);
}

return 0;
}



