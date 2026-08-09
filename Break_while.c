#include <stdio.h>
int main() {
  int i;
i = 1;
printf("enter the number");
scanf("%d",&i);


while (i<=10){
  
  
  
 
  
if(i<1)
  {
    break;
    }
    
    i++;
    //here i added increment or else the loop will print infinitely the i value needs to change and getuoadated so that it stops at 10 here if we enter 1 then the loop runs  break does not work now hence it gets increment till the condition given in for loop is false
    printf("\nthe number is greater than 0");
    }
    return 0;
    }
  
