#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Compare last digit and print
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, n % 10);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, n % 10);
	}
	return (0);
}
