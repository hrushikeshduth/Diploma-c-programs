#include <stdio.h>

int main() {
  int age;
  printf("enter your age");
scanf("%d", &age);
if(age>=18)
//here if statement syntax is used with the flower brackets after the if syntax we shoud keep the output in flower brackets syntax

{
printf("your are eligible to be a voter",age);
//here if the statement is false it skips 
//if the statment is truw that it will print together with the other printf

}
//else is also same but we have to not keep condition or brackets with same syntax
else{
printf("\n you are still a kid ",age);
}

return 0;
}