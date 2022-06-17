#include "main.h"
/**
 * print_alphabet_x10 - funtion print alphabet
 * Descrption: print
 * Return: On success 1
 * @void: print alphabetx10
 */

void print_alphabet_x10(void)
{
char c;
int rep;

for (rep = 1; rep <= 10; rep++)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
