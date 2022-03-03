/*
 * This is K-Concatination problem from code chef, we are given an array and number of times it should be concatinated to itself at end. Now taking the concatinated array as whole we need to find maximum subarray sum.
 * In this problem we cannot actually concatinate the arrays as it would be too large, so we doing as 
 * 1. If sum of array is greater than equal to 0 then maximum of (best suffix sum + best prefix sum + sum of array * k-2) and kadane's sum is answer.
 * 2. If sum of array is less than 0 then kadane's sum is answer.
 * eg: [1,-2,1] k=3 so concatinated array will be [(1,-2,1),(1,-2,1),(1,-2,1)]
 * now here sum is = 0 so best prefix sum = 1, best suffix sum = 1, (sum of array*k-2) = 0, kadane's sum = 1
 * ans = max(1+0+1, 1) = 2 [1,...,1,1,-2,...,1] 
 */

#include<iostream>
#include<climits>
using namespace std;
typedef long long ll;

ll kadane(int* arr, int size)
{
	ll cur_max = 0;
	ll best_max = 0;
	for(int i = 0; i < size; i++)
	{
		cur_max += arr[i];
		if(cur_max > best_max)
			best_max = cur_max;
		if(cur_max < 0)
			cur_max = 0;
	}
	return best_max;
}

ll maxSumSubarray(int* arr, int size, int k)
{
	ll kadanesAns = kadane(arr, size);
	if(k == 1)
	{
		return kadanesAns;
	}
	ll curr_max_prefix = 0, curr_max_suffix = 0;
	ll max_prefix_sum = INT_MIN, max_suffix_sum = INT_MIN;
	for(int i = 0; i < size; i++)
	{
		curr_max_prefix += arr[i];
		max_prefix_sum = max(max_prefix_sum, curr_max_prefix);
		curr_max_suffix += arr[size-(i+1)];
		max_suffix_sum = max(max_suffix_sum, curr_max_suffix);
	}
	ll sumArray = curr_max_prefix;	
	ll ans;
	if(sumArray < 0)
	{
		ans = max(max_prefix_sum + max_suffix_sum, kadanesAns);
	}
	else
	{
		ans = max(max_prefix_sum + max_suffix_sum + (sumArray*(k-2)), kadanesAns);
	}
	return ans;
}
int main()
{
	int tcase = 0;
	cin >> tcase;
	while(tcase--)
	{
		int n,k;
		cin >> n >> k;
		int arr[n];
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
		}
		cout << maxSumSubarray(arr, n, k) << endl;
	}
	return 0;
}
