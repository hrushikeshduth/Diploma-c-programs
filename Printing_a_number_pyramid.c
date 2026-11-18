#include <stdio.h>
// printing number pyramid 
int main()
{
	int i;
	int space = 12,s;
	int k = 1;
	for (i = 1; i <= 4; i++)
	{
	printf("\n");
	for(s=1;s<space;s++){
		
		printf(" ");

		// I have found a way each time the /t to subtract by 1 each time each row is printed i am using space variable to do the work in loop each time the s variable gets incrememnted in the next loop space decreases causing number of spaces printed to be reduced 
	} space--;

		for (int j = 1; j <= i; j++)
		{
			printf("%d ", k);

			k = k + 1;

			// the main problem I am facing now is I can print the pyramid but the numbers are like 1 //
			// 1 12 123 1234 i have to find a way to fix it
			// I think I found a fix to it but it's inefficient
			// i found a fix with help  it's fine because i dry ran
		}
	}
}
