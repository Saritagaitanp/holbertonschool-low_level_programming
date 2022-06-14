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
printf("Size of char: %lu bytes\n", sizeof(chartype));
printf("Size of int: %lu bytes\n", sizeof(inttype));
printf("Size of long int: %lu bytes\n", sizeof(longinttype));
printf("Size of long long int: %lu byte\n", sizeof(longlonginttype));
printf("Size of float: %lu byte\n", sizeof(floattype)); 
return (0);
}
