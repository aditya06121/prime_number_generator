#include<math.h>
/**
 * Function: prime_checker
 * Description: Checks if a given number is prime.
 * Parameters:
 *   num: The number to check.
 * Returns:
 *   1 if the number is prime, 0 otherwise.
 */
int prime_checker(long long num){
	if (num<=1)
	{
		return 0;
	}
	if ( num<=3)
	{
		return 1;
	}
	if (num%2==0)
	{
		return 0;
	}
	for (size_t i = 3; i <= sqrt(num) ; i+=2)
	{
		if (num%i==0)
		{
			return 0;
		}
	}
	return 1;
}