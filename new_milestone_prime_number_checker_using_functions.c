#include <stdio.h>
#include<stdbool.h>
bool checkprime(int num,bool prime){
for(int i=2;i<num;i++){
	


if(num%i==0){

return false;

}
else{
continue;
}
}


return true;



}



int main(){
bool isPrime;
int num;
printf("enter the value of num\n");
scanf("%d",&num);
if(num==1){
printf("it's neither prime nor composite\n");
return 0;
}
if(checkprime( num, isPrime)==true){
	printf("it's prime number\n");
	
	}
else{
printf("it's composite number\n");
}

return 0;
}
