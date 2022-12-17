#include "main.h"

/**
 * more_numbers - prints more numbers
 */


void more_numbers(void)

{
	int ch, j;

	ch = 0;
	while (ch < 10)

	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
		ch++;

		return: 0
	} 
}
