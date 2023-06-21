#include <stdio.h>
/**
 * main - list all the natural numbers below 10 that are multiples of 3 or 5
 * Return: 0 (Success)
 */
int main(void)
{
int i;
int sum;
sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
sum += i;
}
}
printf("%d", sum);
printf("\n");
return (0);
}
