#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: print lowercase then uppercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
