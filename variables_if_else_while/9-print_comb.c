#include <stdio.h>
/**
 *main combinations
 *
 *Return:0
 */

int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar (n);
if (n <= 57)
putchar (',');
if (n <= 56)
putchar (' ');
}
{
putchar ('\n');
}
return (0);
}
