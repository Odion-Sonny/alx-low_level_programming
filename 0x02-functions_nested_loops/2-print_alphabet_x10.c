#include "main.h"
/**
*print_alphabet_x10 - print alphabet
*Return: 0
*/
void print_alphabet_x10(void)
{
char ch;
int c;
c = 1;
while (c <= 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
putchar (ch);
c++;
putchar ('\n');
}
}
