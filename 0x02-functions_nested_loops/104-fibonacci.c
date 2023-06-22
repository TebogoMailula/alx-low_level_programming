#include <stdio.h>
/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * Return: 0 (Success)
 */
#include <stdio.h>

void print_fibonacci(int n)
{
int a = 1;
int b = 2;
printf("%d, %d", a, b);
for (int i = 3; i <= n; i++) {
int c = a + b;
printf(", %d", c);
a = b;
b = c;
}
}
int main()
{
print_fibonacci(98);
printf("\n");
return (0);
}

