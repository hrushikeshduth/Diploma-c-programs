int main()
{
	int n, sum;
	sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		printf("enter the number");
		scanf("%d", &n);

		if (n > 0)
		{
			continue; //i kept sum in condition because after checking tge condition only th e print f output will run
			sum = sum + n;
		}

		printf("the sum is %d", sum);
	}

	return 0;
}
