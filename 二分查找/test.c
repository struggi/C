#include<stdio.h>
int find(int arr[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 2;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d", find(arr, key, sz));
	return 0;
}