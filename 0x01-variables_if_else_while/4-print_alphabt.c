#include <stdio.h>
/**
 * main - program that prints aphabet in lowecase except some
 * Return: 0 (Success)
 */
int main(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
{
if (lc != 'e' && lc != 'q')
{
putchar(lc);
}
}
putchar('\n');
return (0);
}
