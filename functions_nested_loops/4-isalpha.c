#include "main.h"
/**
 *_isalpha - print Write a function that checks for lowercase character.
 *@c: dentro de este esta el alphabet
 *Return: return always in 0 and 1
 */
int _isalpha(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
if (c <= 'Z' && c >= 'A')
{
return (1);
}
else
{
return (0);
}
}
