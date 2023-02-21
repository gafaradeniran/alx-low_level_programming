#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		if ((l == 'q' || l == 'e') != 1)
		{
			putchar(l);
		}

	}
	putchar('\n');
	return (0);
}
