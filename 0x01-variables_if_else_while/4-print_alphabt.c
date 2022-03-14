#include <stdio.h>
/**
* main - function to print alphabet
* Return: no return
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e' || i == 'q')
i++;
putchar (i);
}
putchar ('\n');
return (0);
}
