#include <stdio.h>
int main(){
//sum and average of numbers in an array
double average,sum=0.0;
double array[4];
printf("enter the values of number of array size 4 size 3 means from 0-3 which is 4\n");
for(int i =0;i<=3;i++){
scanf("%lf",&array[i]);
//each time loop runs it will run 4 times i mean the loop will run 4 times that time scanf takes input assigns the numbers to their positions from 0 to i-1 in an array
sum=sum+array[i];
}

average=sum/3;
printf("the sum is %.2f",sum);
printf("\n average is %.2f",average);
return 0;
	
	

	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	

