#include "factor.h"

/**
 * factorize - The function that factorize a number
 * @buffer: pointer to the address of the number
 *
 * Return: returns an integer int
 */
int factorize(char *buffer)
{

	u_int32_t num;
	u_int32_t i;

	/*ASCII to integer*/
	num = atoi(buffer);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n",num,num/i,i);
			break;
		}
	}

return (0);
}
