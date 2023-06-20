#include "main.h"
/**
 * main - program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
_putchar('\n');
}
}
