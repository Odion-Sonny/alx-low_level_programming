#include "main.h"

/**
 * print_sign - Check Holberton
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
  int ret;
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
