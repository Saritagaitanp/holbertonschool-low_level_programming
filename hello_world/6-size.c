#include <stdio.h>
/**
 * main - print size
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char chartype;
int inttype;
long int longinttype;
long long int longlonginttype;
float floattype;
printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
printf("Size of float: %zu byte\n", sizeof(floattype)); 
return (0);
}
