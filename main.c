#include <stdio.h>

void print_array(int arr[], int num)
{
	printf("Array:\n");
	for (int i = 0; i < num; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

int sum_array_rec(int arr[], int num)
{
	if (num == -1) {
		return 0;
	}
	return (arr[num - 1] + sum_array_rec(arr, num - 1));
}

int sum_array_iter(int arr[], int num, int sum)
{
	if (num == 0) {
		return sum;
	}
	sum += arr[num - 1];
	return (sum_array_iter(arr, num - 1, sum));
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
	
	return 0;
}
