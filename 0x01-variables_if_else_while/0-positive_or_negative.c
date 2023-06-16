	#include <stdlib.h>
	#include <stdio.h>
	#include <time.h>

	/**
	 * main - Will store a different value every time you will run this program
	 *
	 * Return: Always 0 (Success)
	 */
		int main(void)
	{
		int n;

        	srand(time(0));
        	n = rand() - RAND_MAX / 2;
	       	printf("%d ", n);
		if (n > 0)
        	{
                	printf("is positive\n");
        	}
        	else if (n == 0)
        	{
                	printf("is zero\n");
        	}
        	else
       		chmod a+x * 0-positive_or_negative.cprintf("is negative\n");
        	}
		return (0);
	}
