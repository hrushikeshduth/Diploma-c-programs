//reverse names
#include <stdio.h>
#include <string.h>
int main()
{
	int size;

	char array[5][28] = {{}};
	size = sizeof(array) / sizeof(array[1]);
	printf("%d", size);
	for (int i = 0; i < size; i++)
	{
		fgets(array[i], sizeof(array[i]), stdin);
		array[i][strcspn(array[i], "\n")] = '\0';
	}

	for (int j = size-1; j >= 0; j--)
	{
		printf("\n %s", array[j]);
	}
}
