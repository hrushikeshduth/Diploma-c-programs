#include<stdio.h>
int main()
{ 
int integer;
integer=0;
printf("enter the value of integer\n");
scanf("%d",&integer);


integer=integer+integer;
//doubling means multiplying by 2
//since we aren't allowed to use multiplication operator we i did like this 
//x*2 is 2x 
// x+x=2x 
// i added the number by itself so that it gets doubled 





printf("the integer value is %d",integer);
return 0;



}

