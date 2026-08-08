#include <stdio.h>
int main() {
  int n,s;
s=10;
//in do syntax we have to directly right the body no need to add anything extra the body of do is executed until the the value enterered by user is not equal to the condition ones we type equal to the condition the loop terminaes or else it keeps on running it will keep on asking inputs by user loop 

do{
  
printf("enter the values");
  scanf("%d", &n);
  
  s+=n;
  
} 
 while  (n!=1);
printf("oops");
return 0;
}
    

