#include "main.h"

/**
 * print_sign - Check Holberton
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int print_sign(int n)
{
int ret = 0;
if (n > 0)
{
ret = 1;
putchar('+');
}
else if (n == 0)
{
ret = 0;
putchar('0');
}
else
{
ret = -1;
putchar('-');
}
return (ret);
}
