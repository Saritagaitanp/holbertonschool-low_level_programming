#include <stdio.h>
/**
 * main - for and if
 *
 * Return: Always 0
 */

int main(void)
{
char c;
for (c = 'a' ; c < 'z' ; c++)
{
if (c == 'e' || c == 'q')
c++;
putchar(c);
}
putchar(c);
return (0);
}
