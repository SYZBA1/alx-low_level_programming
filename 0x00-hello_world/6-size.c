#include <stdio.h>

/**
 * main - Printe the size of various typesa based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld btye(s)\n", sizeof(long long int));
	printf("Size of a float: %ld btye(s)\n", sizeof(float));
	return (0);
}
