#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	printf("Let's play a number guessing game!\n");

	int max = 100;
	int min = 0; // Kept at 0 per your preference
	int num;
	int tries = 0;

	// Seed the random number generator
	srand(time(NULL));
	int Randomnum = (rand() % (max - min + 1)) + min;

	printf("Enter a number between %d and %d:\n", min, max);

	while (1)
	{
		printf("Your guess: ");
		scanf("%d", &num);
		tries++;

		if (num > Randomnum)
		{
			printf("Too high! Try a lower number.\n\n");
		}
		else if (num < Randomnum)
		{
			printf("Too low! Try a higher number.\n\n");
		}
		else
		{
			printf("\nCongratulations! You won the game!\n");
			printf("You guessed it in %d tries.\n", tries);
			break;
		}
	}

	return 0;
}
