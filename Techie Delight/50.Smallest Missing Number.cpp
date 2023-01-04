/*

Given a sorted array of non-negative distinct integers, find the smallest missing non-negative element in it.

Input: [0, 1, 2, 6, 9, 11, 15]
Output: 3

Input: [1, 2, 3, 4, 6, 9, 11, 15]
Output: 0

Input: [0, 1, 2, 3, 4, 5, 6]
Output: 7

So I need to find the 
[0,1,2,3,4,5,6,7] search space
       ^
... n 
  0  1  2  3 
 [0, 1, 2, 6, 9, 11, 15]
           ^
O(n)
0(1)
return 3  

O(log n)
binary search
 0  1  2  3  4   5   6, 
[0, 1, 2, 6, 9, 11, 15]
 l        m          u
 l  m     u
       l  u
       lm u
          u
          l
          m
 0  1  2  3  4         
[1, 2, 3, 4, 6, 9, 11, 15]
 l        m             u
 l  m     u
 l  u
 m
 l
 u
 m

Meanwhile low < upp
 mid = low + (upp-low)/2
 if  mid == nums[mid] 
	low = mid + 1 
 else
	upp = mid 

return mid;

 [0, 1, 2, 3, 4, 5, 6]
                 m  lu
*/

class Solution
{
public:
	int findSmallestMissingNumber(vector<int> const &nums)
	{
		int low = 0, upp = nums.size() - 1;
		int mid;
		while (low < upp)
		{
			mid = low + (mid - low) / 2;

			if (mid == nums[mid])
			{
				low = mid + 1;
			}
			else
			{
				upp = mid;
			}
		}

		mid = low + (mid - low) / 2;
		if (mid == nums[mid])
		{
			mid += 1;
		}

		return mid;
	}
};
