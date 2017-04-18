#include <stdio.h>
//#include "sum_array.h"
//#include "fibonacci.h"

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

int fibonacci_iter(int n, int result)
{
	//result = 0;
	if (n == 0) {
		return 0;
	}
	if ((n == 1) || (n == 2)) {
		return 1;
	}
	return (result + fibonacci_iter(n - 1, result));
}

void print_array(int arr[], int num)
{
	printf("Array:\n");
	for (int i = 0; i < num; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

int main()
{
	int num = 5;
	int arr[5] = {1, 2, 3, 4, 5};
	print_array(arr, num);
	
	//Recursive
	//printf("\nsum_array_recursive = %d\n\n", sum_array_rec(arr, num));
	
	//Iteration
	//int sum = 0;
	//printf("\nsum_array_iteration = %d\n\n", sum_array_iter(arr, num, sum));

	printf("\nFibonacci_rec:\n%d\n", fibonacci_rec(10));

	printf("\nFibonacci_iter:\n%d\n", fibonacci_iter(10, 0));
	
	return 0;
}