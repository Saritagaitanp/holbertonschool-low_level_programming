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
printf("Size of char: %zu bytes\n", sizeof(chartype));
printf("Size of int: %zu bytes\n", sizeof(inttype));
printf("Size of long int: %zu bytes\n", sizeof(longinttype));
printf("Size of long long int: %zu byte\n", sizeof(longlonginttype));
printf("Size of float: %zu byte\n", sizeof(floattype)); 
return (0);
}
