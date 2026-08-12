#include <stdio.h>
int main()
{
int a,b;//here i declared the variables which I'll be usingfir sum and so on operations
char operators;
printf("enter the values for a and b");
scanf("%d %d",&a,&b);
printf("enter the operator (+ - / * )");
scanf(" %c" , &operators);
//there is a very specific reason i kept space here charcter operator reads even enter as a character \n when we enter the values for a and b we subcinsicsly press enter that time char value becomes \n new line 
switch(operators)
{
case '+':
printf("result is %d",a + b);
break;

case '-':
printf("the result %d",a-b);
break;
case '/':
printf("the result is %d",a/b);
break;
case '*':
printf("the result is %d",a*b);
break;

default:

printf("oops so sad");
}
return 0;
}

