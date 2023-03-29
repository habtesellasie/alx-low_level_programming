#include "main.h"
#include <stdio.h>

int check_prime(int num, int i);

/**
 * is_prime_number - checkes if a number is prime number
 * @num: the number to check
 * Return: int
 */

int is_prime_number(int num)
{
	return (check_prime(num, 1));
}

/**
 * check_prime - checkes if a number is prime number
 * @num: the num to check
 * @i: loop
 * Return: 1 for prime 0 for not prime
 */

int check_prime(int num, int i)
{
	if (num <= 1)
		return (0);
	if (num % i == 0 && i > 1)
		return (0);
	if ((num / i) < i)
		return (1);
	return (check_prime(num, i + 1));
}
