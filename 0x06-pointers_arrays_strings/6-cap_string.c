#include "main.h"
#include <ctype.h>

/**
 * cap_string - function that capitalises all words of a string
 * @str: string
 *
 * Return: returns str
 */

char *cap_string(char *str)
{
char *ptr = str;
int capitalize_next = 1;

while (*ptr != '\0')
{
if (isspace(*ptr) || ispunct(*ptr))
{
capitalize_next = 1;
}
else if (capitalize_next)
{
*ptr = toupper(*ptr);
capitalize_next = 0;
}
ptr++;
}
return (str);
}
