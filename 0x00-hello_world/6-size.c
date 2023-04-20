#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

	printf("Size of a char: %d  byte(s)", seizof(char));
	printf("Size of an int: %d  byte(s)", seizeof(int));
	printf("Size of a long int: %d byte(s)", seizeof(long int));
	printf("Size of a long long int: %d byte(s)", seizeof(long long  int));
	printf("Size of a float: %d byte(s)", seizeof(float));
	return (0);
