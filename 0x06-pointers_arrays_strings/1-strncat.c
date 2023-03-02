#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * it will use at most n bytes from src
 * @src: string to be concatenated
 * @dest: string
 * @n: number of bytes from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
char *result = dest;
while (*dest)
dest++;

while (*src && n--)
*dest++ = *src++;

*dest = '\0';
return (result);


}
