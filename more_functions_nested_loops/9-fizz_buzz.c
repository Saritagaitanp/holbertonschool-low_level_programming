#include <stdio.h>
/**
 *main - Fizz Buzz
 *Return: return concept
 */

int main(void)
{
int i;

for (i = 1; i < 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 5 == 0)
printf("Buzz ");
else if (i % 3 == 0)
printf("Fizz ");
else
printf("%i ", i);
}
printf("Buzz\n");
return (0);
}
