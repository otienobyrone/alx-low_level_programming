#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{
	int n;
	if (n > 0)
        printf("is positive.\n");
	 if (n == 0)
        printf("is zero.\n");
	  if (n < 0)
        printf("is negative.\n");



	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
