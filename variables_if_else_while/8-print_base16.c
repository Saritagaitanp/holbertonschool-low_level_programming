#include <stdio.h>
/**
 *main - in base 16
 *
 *Return: 0
 */

int main(void)
{
int c = 'a';
int n;
for (n = 48; n <= 57; n++)
putchar (n);
while (c <= 'f')
{
putchar (c);
c++;
}
putchar ('\n');
return (0);
}
