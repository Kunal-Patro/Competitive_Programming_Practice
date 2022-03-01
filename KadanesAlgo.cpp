/*
 * This is Kadane's Algorithm, i.e. finding the maximum sum subarray.
 */
#include<iostream>
using namespace std;

int kadane(int* arr, int size)
{
	int cur_max = 0;
	int best_max = 0;
	for(int i = 0; i < size; i++)
	{
		cur_max = cur_max + arr[i];
		if(cur_max > best_max)
			best_max = cur_max;
		if(cur_max < 0)
			cur_max = 0;
	}
	return best_max;
}
int main()
{
	int arr[] = {5,6,-7,-9,-3,13,7};
	int max = kadane(arr,7);
	cout<<"Max is " << max;
	return 0;
}
