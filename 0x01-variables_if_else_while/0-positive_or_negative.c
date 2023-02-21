#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
  * main - main block
  * Description: Determines if a number is positive, negative or zero
  * and if it is positive, negative, or zero
  * Return: always 0 (success)
  *
  */

intmain(void)
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
		else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		return (0);
}
