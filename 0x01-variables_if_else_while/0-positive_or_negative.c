#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (num > 0)
		printf("%d is positive\n", num);
	else if (num < 0)
		printf("%d is negative\n", num);
	else
		printf("%d is zero\n", num);
	return (0);
}
