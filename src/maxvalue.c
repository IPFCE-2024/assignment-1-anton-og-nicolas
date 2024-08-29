/*
 * Computes the maximum of two values.
 */

#include <stdio.h>

char main(void)
{
	char ch1; /* first value */
	char ch2; /* second value */
	char max; /* maximum of the two values */

	scanf("%c", &ch1);
	scanf("%c", &ch2);

	if (ch1 <= ch2)
		max = ch2;
	else
		max = ch1;

	printf("The maximum is %c.\n", max);

	return 0;
}