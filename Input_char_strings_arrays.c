#include <stdio.h>
#include <string.h>
int main()
{int size;
	
	char array[4][25] = {"0"};
//we created a chr string array with currently 0 in its value 
	// since it's multi dimensional array it needs to read which row or colimsit is that's why we keep i in square bracket in string it reads all columns together instead of seperately so columns no need to specify it will just print whatever is in that row that's why even though it's multi dimensional array we only keep one array[i] instead of two brackets
	size=sizeof(array)/sizeof(array[1]);
	
	for (int i=0; i < size; i++)
	{
fgets(array[i],sizeof(array[i]), stdin);
array[i][strlen(array[i])-1]='\0';
// i hitted a road block here but fgets has annoying new line after it takes string length to remove 

}

for(int j=0;j<size;j++){
printf("%s", array[j]);
}	
return 0;	
}
