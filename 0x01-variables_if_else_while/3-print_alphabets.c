#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	char Alphabets;

	for (Alphabets = 'a'; Alphabets <= 'z'; Alphabets++)
		putchar(Alphabets);
	for (Alphabets = 'A'; Alphabets <= 'Z'; Alphabets++)
		putchar(Alphabets);
	putchar('\n');
	return (0);
}
