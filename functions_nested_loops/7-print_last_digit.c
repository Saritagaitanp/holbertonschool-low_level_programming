#include "main.h"
/**
 *print_lastdigit - print the last digit of a number
 *@n: is not a only number
 *Return: always return 0
 *
 */
int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 0)
ld = -ld;
_putchar(ld + '0');
return (ld);
}
