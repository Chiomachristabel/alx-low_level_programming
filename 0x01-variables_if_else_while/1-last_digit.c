#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("last digit of %i is %i and is greater than 5\n", n, lastdigit);
	{
	else if (lastdigit == 0)
	{
		printf("last digit of %i is %i and is 0\n", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
	printf("last digit of %i is %i and is less than 6 and not 0\n", n, lastdigit);
	}
	return (0);
}
