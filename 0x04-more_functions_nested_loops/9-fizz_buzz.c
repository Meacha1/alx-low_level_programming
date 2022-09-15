#include<stdio.h>

/**
  * main - Prints a Fizz Buzz program
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
int i;
char str1[] = "Fizz";
char str2[] = "Buzz";
char str3[] = "FizzBuzz";
for (i = 1; i <= 100; i++)
{
if (i % 3 != 0 && i % 5 != 0)
printf("%d", i);
if (i != 100)
printf(" ");
if (i % 5 == 0 && i % 3 == 0)
{
printf("%s", str3);
}
else if (i % 3 == 0)
{
printf("%s", str1);
}
else if (i % 5 == 0)
{
printf("%s", str2);
}
}
return (0);
}
