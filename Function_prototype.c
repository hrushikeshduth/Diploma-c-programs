#include <stdio.h>

float add(float n1, float n2);
float multiply(float n1, float n2);

//function prototype is used to make a code readable
int main()
{
	float additionresult, n1, n2,multiresult;
	n2 = 3;
	n1 = 10;

	additionresult = add(n1, n2);
multiresult=multiply(n1,n2);
	printf("addresult is %.2f", additionresult);
	printf("\nmultiresult is %.2f", multiresult);

	return 0;
}
float add(float n1, float n2)
{
	return n1 + n2;
}
float multiply(float n1, float n2)
{
return n1*n2;	
}
