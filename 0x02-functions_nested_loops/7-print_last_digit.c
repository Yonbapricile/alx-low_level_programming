#include "main.h"
/**
 * print_last_digit - prints the last digit
 * of a number
 *
 * @n: input number of an interger
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
int l;
l = n % 19;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}
