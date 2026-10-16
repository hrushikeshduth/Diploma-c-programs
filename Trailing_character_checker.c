
#include <stdio.h>
#include <string.h>
int main(){
char array[1][80]={{"   "}};
int size;
size=sizeof(array)/sizeof(array[0][1]);

int check=0;

for(int k=0;k<=size;k++){
for(int j=0;j<=size;j++){

if(array[k][j]==' '){
	
check++;
	
	
}
continue;
}

	
}
printf("the number of traling characters is %d",check);	
	

	
	
	

	
	
	
	
	// modified updated mostly correct still needs fixes
	
	
	
}	
	

	
	
	
	
	
	
	
	

