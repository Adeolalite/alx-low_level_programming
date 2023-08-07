#include <stdio.h>

/**
 * main - 3. alphABET
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int up, low;

	up = 'A';
	low = 'a';
	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up++;
	}
	
	putchar('\n');
	return (0);
}
