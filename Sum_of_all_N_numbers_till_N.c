#include <stdio.h>
int main(){
int i,N;
printf("enter the value of N");
scanf("%d",&N);
	i=0;
while(i<=N){
	i++;
if(i%2==0){

	
	continue;

}
else{
	printf(" the odd numbers %d\n",i);
}
}
return 0;
}
