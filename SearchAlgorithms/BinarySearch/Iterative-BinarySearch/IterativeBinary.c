/*
Binary Search (Divide and Conquer Algorithm)

	Input = Ordered List/Array + Target (Item to search)
	Output = Index of target in the Array

Given a sorted array of n integers and a target value, the algorithm determines
if the target exists in the array in logarithmic time.

It works by repeatedly dividing in half the portion of the list that could contain
the item, until it's narrowed down the possible locatioins to just onoe.

If the target does not exist, function returns -1.

Time complexity = O(log_2n).
*/

#include <stdio.h>

int	binarySearch(int nums[], int n, int target)
{
	int	low = 0;
	int	high = n - 1;
	int	mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (target == nums[mid])
			return (mid);
		else if (target < nums[mid])
			high = mid -1;
		else
			low = mid + 1;
	}
	return (-1);
}

int	main(void)
{
	int	nums[] = {1, 3, 7, 12, 31, 60};
	int	target = 31;
	int	n = sizeof(nums) / sizeof(int);
	int	index;

	index = binarySearch(nums, n, target);
	if (index == -1)
		printf("Element not found");
	else
		printf("Target found at index: %d", index);
	
	return (0);
}
