#include "fibonacci.h"

int fibonacci_rec(int n)
{
	if (n == 0) {
		return 0;
	}
	if ((n == 1) || (n == 2)) {
		return 1;
	}
	return (fibonacci_rec(n - 2) + fibonacci_rec(n - 1));
}