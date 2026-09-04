#include <stdio.h>
//this function takes value of nums
float mul(float x, float y){
  float	product=x*y;
	return product ;
	//returns to main function
	
}
//I'll name the function as multiply so to keep more sense
//next i have to declare and return the value of multiply  to main function 
int main(){
	float numbers=mul( 2.5f,4.0f);
	
	printf("the product is %.2f",numbers);
	
return 0;	
}