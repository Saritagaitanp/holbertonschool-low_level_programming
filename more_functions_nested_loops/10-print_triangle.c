#include "main.h"
/**
 * print_triangle - print triangle #
 * @size: variable
 * Return: cero
 *
 */

void print_triangle(int size)
{
int a = 0;
int b = 0;

if (size > 0)
{
for (a = 0; a <= size; a++)
{
for (b = 0; b <= size; b++)
{
if (b <= size - a)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
