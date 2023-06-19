#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
char lc;
for (lc = 'z'; lc >= 'a'; lc--)
{
putchar(lc);
}
putchar('\n');
return (0);
}
