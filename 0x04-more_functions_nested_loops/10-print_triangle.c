#include "main h"

/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Return: triangle of '#'s
 */

void print_triangle(int size)
{
int inc1, inc2, inc3;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (inc2 = 0; inc2 <= (size - 1); inc2++)
{
for (inc1 = 0; inc1 < (size - 1) - inc1; inc1++)
{
_putchar(' ');
}

for (inc3 = 0; inc3 <= inc2; inc3++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
