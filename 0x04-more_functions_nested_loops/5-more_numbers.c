#include "main.h"

/**
 * more_numbers - prints more number
*/
void more_numbers(void)
{
int i, r;
for (i = 1; i <= 10; i++)
{
for (r = 0; r <= 14; r++)
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
