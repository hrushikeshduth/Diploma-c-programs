#include <stdio.h>
int main(){
	
int array[2][3]={{1,2,3},{3,6,9}};
//this is a multi dimensional array simply we can say that it has 2 rows and 3 columns
//here we have to use nested loops to print it's position because since now it's multidimensional it's position are 0,0 0,1 0,2 as u observe here only j value changes we can simply say it's in 0 row 
//in next iteration we can see that i value changes to 1 and it turns from 1,0 1,1 1,2 0 position index 1 position index and 3 position index gets printed
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
	
printf("%d ",array[i][j]);		
			
}	
}			
					
						
					
}	
	
	
	
	
	
