#include <stdio.h>
//take input store integers in array
int main()
{
int array[4]={};
printf("enter the values of array size is 4 which means 5 integers\n");
//this loop is used to print number for each position this is cleaner way
for(int i=0;i<=4;i++){
//this statement takes input and assigns the integer to position of number in array denoted by variable name[position]
scanf(" %d",&array[i]);
	


}

//this is for printing the number assigned to position of array the loop runs 5 times and prints five numbers 

for(int i=0;i<=4;i++){
printf(" the array is :%d",array[i]);	

}	
	
	
	
	
return 0;
	
	
	
}
