#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - prints size of string
 * @s : input
 * Return: int
*/
int _strlen_recursion(char *s)
{
int ntr = 0;
if (*s != '\0')
{
ntr += _strlen_recursion(s + 1);
ntr++;
}
return (ntr);
}
