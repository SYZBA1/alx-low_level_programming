#include <stdio.h>


/**
 * main - Printe the size of various typesa based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(void)

{
	printf("Size of char: %zu byte(s)\n", sizeof(char));

	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu btye(s)\n", sizeof(long long int));
	printf("Size of a float: %zu btye(s)\n", sizeof(float));
	return (0);
}
