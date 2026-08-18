#include <stdio.h>
int main()
{
 int number;
// it will the number which we will take factors for
  printf("enter the number");
  scanf("%d",&number);
  for(int factor=1;factor<=number;factor++)
//here i intialized factor as the accumulater variable as the factor is the number that should change to get more factors of number
{
  //% denotes to give remainder i added it in if statement so that it will only printf factors of number 
if(number%factor==0){

  printf("the factor is %d\n",factor);
} 
 
  
  }
  return 0;

