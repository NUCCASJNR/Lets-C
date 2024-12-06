#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
char name;
int age;
long int long_int;
long long int long_long_int;
float number;

printf("Size of a char: %llu byte(s)\n", sizeof(name));
printf("Size of an int: %llu byte(s)\n", sizeof(age));
printf("Size of a long int: %llu byte(s)\n", sizeof(long_int));
printf("Size of a long long int: %llu byte(s)\n", sizeof(long_long_int));
printf("Size of a float: %llu byte(s)\n", sizeof(number));
}
