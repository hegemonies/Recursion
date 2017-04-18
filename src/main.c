#include <stdio.h>
#include "fibonacci.h"
#include "sum_array.h"

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
	printf("\nsum_array_recursive = %d\n\n", sum_array_rec(arr, num));
	
	//Iteration
	int sum = 0;
	printf("\nsum_array_iteration = %d\n\n", sum_array_iter(arr, num, sum));
	int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	print_array(n, 11);

	//
	printf("\nFibonacci_rec:\n");
	for (int i = 0; i < 11; i++){
		printf("%d\t", fibonacci_rec(n[i]));
	}
	printf("\nFibonacci_iter:\n");
	for (int i = 0; i < 11; i++){
		printf("%d\t", fibonacci_iter(n[i]));
	}
	printf("\n");
	return 0;
}