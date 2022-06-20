#include "main.h"
/**
 *times_table - tabla de multiplicar del 0 al 9
 *
 */
void times_table(void)
{
int a, b, r;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
r = a * b;
if (r > 9)
_putchar ((r / 10) + '0');
_putchar ((r % 10) + '0');
if (b < 9)
_putchar(',');
_putchar('\t');
if (a < 9)
_putchar(' ');
}
_putchar('\n');
}
}
