// to find gcd of two numbers 
#include <stdio.h>
int main(){
int number1;

int number2;
int gcd=0;
int max=0;







int i=1;
// factors of number 1
printf("Enter the number1 ");
scanf("%d",&number1);
printf("%d\n",number1);

printf("Enter the number2 ");
scanf("%d",&number2);
printf("%d\n",number2);
int numberstocheck;
if(number1<=number2){
	
numberstocheck=number2;	
}
else{
numberstocheck=number1;	
}
printf("%d\n",numberstocheck);
for(i;i<=numberstocheck;i++){

// i am struggling to find a way to store factors
// i found a way that if i divides both number 1 and number 2 at the same time then it is a factor and gets stored in gcd variable then we have stored that factor as max and if condition if max less than gcd then new gcd is the max 
// the error i fixed is now  Check if 'i' divides both numbers evenly (Target % Factor == 0)
//before I kept it reverse like factor % target it wouldn't work;
if((number1%i==0) && (number2%i==0)){

gcd=i;

}

if(gcd>=max){
max=gcd;

}

}

printf("the HCF of two numbers is %d\n",max);				
					
	
	}

			
				

				
				
				
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
