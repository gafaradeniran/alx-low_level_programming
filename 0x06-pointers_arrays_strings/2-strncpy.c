#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: a string
 * @src: string
 * @n: an integer
 *
 *Return: not specified
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
char *result = dest;
while (n-- && (*dest++ = *src++))

*dest = '\0';
return (result);
}
