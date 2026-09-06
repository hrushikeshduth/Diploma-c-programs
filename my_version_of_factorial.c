#include <stdio.h>
//recursion function
int factorial(int n,int fact){
//here i understood that that it should be n should be greater or equal to fact so it will return unwinded value 	
if(n>=fact){
return n;
	

}
else{
return n*factorial(n+1, fact);

}
	
}

int main()
{
int fact,num,result;
fact=6;
num=1;

result=factorial(num,fact);



printf("factorial of number %d is %d",fact,result);

	




}
// recursion function 
/*
it goes three steps 

first step-
there is base case  and recursion case 

base case is used for to avoid infinite stack overflow it acts as condition in for loop i just used for analogy it tells function to stop 

second step 
we have to call the function
in return or without return we have to call the function inside function itself so that it acts as a loop and we have to add something so that it accumulates or changes any each time it is called all the changes values of variable inside function are stored each time they called 

third step
third step it unwids all the changed perfoms the given operation 

here i raise a question 
does it perform the the operation given * or only * no matter what how does the unwinding actually works 




*/
