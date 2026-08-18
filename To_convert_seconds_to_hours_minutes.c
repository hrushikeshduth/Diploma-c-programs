#include <stdio.h>
int main()
{
float seconds,hours,minutes;
printf("enter the number of seconds");
scanf("%f",&seconds);//asks user to enter seconds
{
hours=seconds/3600;//it leaves quotient 1 hour is 3600 seconds if it wete in hours we would multiply by 3600 to fonvert in seconds
minutes=hours*60;
//an hour is equal to 60 minutes so the updated hour will be multiplied by 60 to present exact results
}
printf("hours is %.3f minutes is %.3f",hours,minutes);
return 0;
}

