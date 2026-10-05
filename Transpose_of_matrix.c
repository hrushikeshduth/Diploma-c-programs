#include <stdio.h>
int main()
{
int array[][3]={{1,2,3},
                {4,5,6},
                {7,8,9}};
//i will be outer loop it will represt row 
//j will represt column
for(int i=0;i<3;i++){

for(int j=0;j<3;j++){

printf("%d ",array[j][i]);
// when we transpose the position of elements in array change like the 0,0 0,1 and 0,2 and replaced with 
// 0,0 1,0 2,0 we can observe that only j value changes so we need to reverse position before it was i j now it's j i I hope u understand it 
	
	
}
	
printf("\n");	
	
}


/*
transpose 1 4 7
          2 5 8
          3 6 9
          
          
           1,2,3},
          {4,5,6},
          {7,8,9
            
  
 */            
	
	
	
	
	
	
	
	
	
	
	
}
