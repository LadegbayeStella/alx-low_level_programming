#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", seizof(char));
	printf("Size of an int: %lu  byte(s)\n", seizeof(int));
	printf("Size of a long int: %lu byte(s)\n", seizeof(long int));
	printf("Size of a long long int: %lu  byte(s)\n", seizeof(long long  int));
	printf("Size of a float: %lu byte(s)\n", seizeof(float));
	return (0);
}
