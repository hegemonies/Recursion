#include "fibonacci.h"

int fibonacci_rec(int n)
{
	if (n == 0 || n == -1) {
		return 1;
	}
	if ((n == 0) || (n == 1)) {
		return 1;
	}
	return (fibonacci_rec(n - 2) + fibonacci_rec(n - 1));
}

int fibonacci_iter_n(int n, int result, int count, int p_result)
{
	if (count > n) {
		return result;
	}
	if (count > 1) {
		return fibonacci_iter_n(n, result + p_result, count + 1, result);
	}
	return -1;
}

int fibonacci_iter(int n)
{
	return fibonacci_iter_n(n, 1, 2, 1);
}