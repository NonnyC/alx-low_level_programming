#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char letter;

letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');

}

