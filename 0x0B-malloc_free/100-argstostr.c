#include "main.h"
/**
* _strlen - returns the length of string
* @str : string
* Return: int
*/
int _strlen(char *str)
{
int size = 0;
while (str[size] != '\0')
size++;
return (size);
}
/**
* argstostr -  concatenates all the arguments of your program
* @ac : integer
* @av : pointer to pointer of char
* Return: pointer to the array
*/
char *argstostr(int ac, char **av)
{
int i = 0, nc = 0, j = 0, cmpt = 0;
char *s;
if (ac == 0 || av == 0)
return (NULL);
while (i < ac)
{
nc += _strlen(av[i]);
nc++;
i++;
}
s = malloc(sizeof(*s) * nc + 1);
if (s == 0)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[cmpt] = av[i][j];
cmpt++;
}
s[cmpt] = '\n';
cmpt++;
}
s[cmpt] = '\0';
return (s);
}
