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

/*
For the recursive implementation we will use (low > heigh) as the base case. This 
will indicate that the search space is exhausted.

*/

#include <stdio.h>

int	binarySearch(int nums[], int low, int high, int target)
{
	int	mid;

	mid = (low + high) / 2;

	if (low > high)
		return (-1);
	
	if (target == nums[mid])
		return (mid);
	else if (target < nums[mid])
		return (binarySearch(nums, low, mid - 1, target));
	else
		return (binarySearch(nums, mid + 1, high, target));
}

int	main(void)
{
	int	nums[] = {4, 5, 7, 12, 23, 25};
	int	target = 5;
	int	n = sizeof(nums) / sizeof(int);
	int	index;

	int low = 0;
	int high = n - 1;

	index = binarySearch(nums, low, high, target);
	if (index == -1)
		printf("Element not found");
	else
		printf("Target found at index: %d", index);
	
	return (0);
}