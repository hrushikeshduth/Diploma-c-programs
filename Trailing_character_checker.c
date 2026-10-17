/*. Count the spaces (looping through a string)
Read one line of up to 80 characters. Print how many spaces it contains, including leading and trailing ones.*/
#include <stdio.h>
#include <string.h>
int main(){
char array[1][80]={{"hru"}};

int check=0;

for(int k=0;k<=sizeof(array[0][1]);k++){
for(int j=0;j<=sizeof(array);j++){

if(array[k][j]==' '){
	
check++;
	
	
}
continue;
}

	
}
printf("the number of traling characters is %d",check);	
	

	
	
	
/* tried fixxing */
	
	
	
	
	
	
	
	
}
