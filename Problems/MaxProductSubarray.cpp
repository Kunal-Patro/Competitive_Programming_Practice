/*
 * This is maximum subarray product. Input as follows:
 * Line1: number of test cases.
 * Line2: number of elements in array of testcase 1.
 * Line3: values of array seperated by space.
 * Line 2 and 3 are repeated according to number of test cases.
 * We need to get the maximum product of subarray from the array. Elements in the array can be negative as well as positive.
 */

#include<bits/stdc++.h>
#define RESET 1
using namespace std;

int maxProductSubarray(int* arr, int size)
{
	int maximum = 0;
	int max_ending = 1, min_ending = 1;
	for(int i = 0; i < size; i++)
	{
		if(arr[i] > 0)
		{
			max_ending *= arr[i];
			min_ending = min(1, min_ending * arr[i]);
		}
		else if(arr[i] < 0)
		{
			int temp = min_ending;
			min_ending = max_ending * arr[i];
			max_ending = max(1, temp * arr[i]);
		}
		else
		{
			max_ending = RESET;
			min_ending = RESET;
		}
		if(maximum < max_ending)
			maximum = max_ending;
	}
	return maximum;
}	
int main()
{
	int tcase;
	cin >> tcase;
	while(tcase--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cout << maxProductSubarray(arr, n) << endl;
	}
	return 0;
}
