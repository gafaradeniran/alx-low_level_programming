#include "main.h"
#include <ctype.h>
/**
 * string_toupper - function to change all lower case letters to uppercase
 * @str: string
 *
 * Return: returns a string
 *
 */


char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
*ptr = toupper(*ptr);
ptr++;
}
return (str);
}
