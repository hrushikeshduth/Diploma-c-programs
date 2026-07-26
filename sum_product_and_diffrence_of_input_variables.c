#include <stdio.h>
int main(){
 
int a , b ;
int sum,product;
int diffrence;
printf("enter the values");
scanf("%d%d", &a , &b);
//here we assigned integer type to all the variables except remainder  we want to use only literal integer values in this in input statement I kept two %d%d because there were two variables required to do all the operations
sum = a + b;
printf("sum is : %d", sum);
product = a * b;
printf("\nproduct is : %d",product);
diffrence = a - b;
printf("\ndiffrence is : %d",diffrence);
return 0;
}
//here we can only use int values excuse the input values are int form only so double or float won't work if we chose a int and b float still it won't cause we assigned int values to sum product remainder I'll look forward how to solve it
