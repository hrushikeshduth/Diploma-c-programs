#include <stdio.h>
void ascendingorder(int n1,int n2,int n3);
int main(){
int num1,num2,num3;
printf("enter the numbers\n")
scanf("%d %d %d",&num1,&num2,&num3);
printf("the numbers are %d %d %d",num1,num2,num3);
ascendingorder(num1,num2,num3);

}
void ascendingorder(int n1,int n2,int n3){
if((n1<n2 && n1<n3)&&(n1<n2 && n2<n3)&&(n3>n1 && n3>n2)){
printf("order:\n");		
printf("%d<%d<%d",n1,n2,n3);	
	
	
}
else if((n2<n1 && n2<n3)&&(n2<n1 && n1<n3)&&(n3>n1 && n3>n2)){
printf("order:\n");		
printf("%d<%d<%d",n2,n1,n3);	
	
	
}
else if((n3<n1 && n3<n2)&&(n3<n1 && n1<n2)&&(n2>n1 && n2>n3)){
printf("order:\n");		
printf("%d<%d<%d",n3,n1,n2);	
	
	
}
else if((n2<n3 && n2<n1)&&(n2<n3 && n3<n1)&&(n1>n2 && n1>n3)){
printf("order:\n");		
printf("%d<%d<%d",n2,n3,n1);	
	
	
}
else if((n3<n1 && n3<n2)&&(n3<n2 && n2<n1)&&(n1>n2 && n1>n3)){
printf("order:\n");		
printf("%d<%d<%d",n3,n2,n1);	
	
	
}
else if((n1<n2 && n1<n3)&&(n1<n3 && n3<n2)&&(n2>n1 && n2>n3)){
printf("order:\n");		
printf("%d<%d<%d",n1,n3,n2);	
	
	
}



	
	
	
	
	
	
	
	
	
	
	
	
	
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
