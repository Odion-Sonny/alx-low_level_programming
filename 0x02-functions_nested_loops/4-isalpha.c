#include "main.h"

/**
 * _isalpha - Check Holberton
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _isalpha(int c)
{
char i, j;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
for (j = 'A'; j <= 'Z'; j++)
{
if (i == c || j == c)
lower = 1;
}
}
return (lower);
}
