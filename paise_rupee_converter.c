#include <stdio.h>
int main()
{
int total_paise,rupee,paise;
printf("enter the number");
scanf("%d",&total_paise);
// the first two lines printf and scanf are out put and input i wrote the both simuntaneously because to have working live program instead we can even use just instead we can assign a value to int variable total paise
rupee = total_paise / 100 ;
//here we did /100 because we nerr quotient to get rupees
paise = total_paise % 100;
//here we did % 100 because we need remainder to get paise liek if the number is total paise is 100 the remaib der is 0 then it means paise is 0
printf("rupee %d \npaise %d", rupee,paise);
//2 %d because there are two integers i simply wrote this in one statement we can even write in two 
return 0;
}
