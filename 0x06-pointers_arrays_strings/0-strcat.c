#include "main.h"

/**
 *_strcat - function to concatenate two strings
 *
 * @dest: string to append
 * @src: string
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
char *result = dest;
while (*dest)
dest++;

while (*src)
*dest++ = *src++;

*dest = '\0';
return (result);

}
