#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: char to comapre
 * @s2: char
 * Return: not needed
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(const unsigned char *)s1 - *(const unsigned char *)s2);

}
