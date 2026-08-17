#include <stdio.h>
int main()
{
// the question is to print product=1+

int costant,variable,n,sum,x;
printf("enter the values x");
scanf("%d",&x);//i added another variable so tgat it will make things easier for me instead of this we can declare constant and variable scanf statement 

// here i declared 3 things costant remains cinstant throught whole it is brought by the relation i found between 1+x,xsquare and so on
printf("enter the number n");
scanf("%d",&n);
costant = x;
variable = x;
sum=1;
//here since n is uknown value but we still need it print  n so that means i have to add limitation to the variable so it remains below input n value 
for(; variable<=n;){
	sum=sum+variable;
	variable=variable*costant;
	
	

	//i didnt add incrmeent here cuz i dont wbat to change either variable value or any value troughout the code but it raises a problem of infinite loop since there arent any conditipns to verify so i added if statement and break sonthat it breaks when it exceeds tge if condition
	
	if(variable>n) 
		break;
	}
	printf("%d, ",sum);
	
	
	return 0;
		
		
		
	}
	
