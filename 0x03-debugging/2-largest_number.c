#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
<<<<<<< HEAD
if (a > b && a > c)
{
largest = a;
}
else if (b > a && b > c)
{
largest = b;
}
else if (c > b)
{
largest = c;
}
else
{
largest = b;
=======
if (a > b && b > c)
{
largest = a;
}
else if (b > a && a > c)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
>>>>>>> 02b0d10e6cc401a9c6f4075cd0c94fc056e8ab62
}
return (largest);
}
