#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
