#include "sum_array.h"

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
