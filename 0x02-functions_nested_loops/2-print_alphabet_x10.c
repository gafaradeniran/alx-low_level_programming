#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabets 10 times
 *
 * Result: always 0
 */

void print_alphabet_x10(void)
{
int counter;
char i;
for (counter = 1; counter <= 10; counter++)
{
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
	_putchar('\n');
}

}
