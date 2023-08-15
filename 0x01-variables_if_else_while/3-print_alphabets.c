#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
char letterup;
for (letterup = 'A'; letterup <= 'Z'; letterup++)
{
putchar(letterup);
}
putchar('\n');
return (0);
}
