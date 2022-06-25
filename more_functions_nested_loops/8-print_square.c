#include "main.h"
/**
 *print_square - function for print lines
 *@size: quanty of print lines
 */

void print_square(int size)

{

int j = 0;
int i = 0;

for (j = 0; j < size; j++)
{
for (i = 0; i < j; i++)
_putchar('#');
_putchar('\n');
}
if (size < 1)
_putchar('\n');
}
