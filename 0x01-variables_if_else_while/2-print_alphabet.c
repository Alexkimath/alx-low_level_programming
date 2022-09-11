/*output alphabets in lowercase*/
#include <stdio.h>

/**
 * Main- entry point
 *
 * Returrn: Always 0 success
 */

int main(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z');

	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
