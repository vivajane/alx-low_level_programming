#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print number
 *
 * Description: Check the last digit of a random
 * number -1 0 +1
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
