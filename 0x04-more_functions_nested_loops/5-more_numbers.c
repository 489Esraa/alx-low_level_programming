#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints more numbers
 *
 * return: void
 *
*/
void more_numbers(void)
{
for (int i = 1; i <= 10; i++)
{
for (int r = 0; r <= 14; r++)
{
if (r >= 10)
{
_putchar('1');
}
_putchar (r % 10 + '0');
}
_putchar("\n");
}
}
