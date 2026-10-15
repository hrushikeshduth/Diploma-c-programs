/*. Count the spaces (looping through a string)
Read one line of up to 80 characters. Print how many spaces it contains, including leading and trailing ones.*/
#include <stdio.h>
#include <string.h>
int main(){
char array[2][6]={{"      "},{" "}};
int size;
size=sizeof(array)/sizeof(array[0]);

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
	

	
	
	

	
	
	
	
	
	
	
	
}
