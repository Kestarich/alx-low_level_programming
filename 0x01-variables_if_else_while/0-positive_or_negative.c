#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - print out if the condition is positive, zero or negative
 * Return - always return 0
 */
	int main(void) /* Description: main function */
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)	
{
	printf("%d is positive\n", n);
}
	else if (n == 0)	
{
	printf("%d is zero\n", n);
}
	else if  (n < 0)
{
	printf("%d is negative\n", n);
}
	return (0);
}
