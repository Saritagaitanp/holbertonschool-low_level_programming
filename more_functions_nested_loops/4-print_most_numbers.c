#include "main.h"
/**
 * print_most_numbers - print numbers except two and four
 */

void print_most_numbers(void)

{

int a;

for (a = 48 ; a <= 57 ; a++)
{
if (a == 50 || a == 52)
a++;
_putchar(a);
}
_putchar('\n');
}
