#include <stdio.h>

int main() {
  double a,b;
int result;
printf("enter the values");
scanf("%lf%lf",&a,&b);
result = (int) a + b; // now it gives result of nearby values like fir example if a is 15.2 and b is 12.3 then a+b int  will give value of 15 + 12 only not considering the points if we consider point decimals we should add the resukt = (double) then it will give nearby value in int form
printf("the result is %d",result);

return 0;
}
	
