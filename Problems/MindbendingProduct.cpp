/*
 * This problem is about calculating the product of all the element in an array except the element at that index and return the product array.
 * Constraints time complexity - O(n) space complexity - O(1)
 * Input:
 * 	Line1 - Number of test cases.
 * 	Line2 - Number of element in the array of testcase 1.
 * 	Line3 - Elements of array separated by space or enter.
 * Output: An array of Producted elements (Mindbending Product).
 */
#include<bits/stdc++.h>
using namespace std;

void mindbendingProduct(int* arr, int size, long* sol)
{
	int rightSubProduct = 1 , leftSubProduct = 1;
	for(int i = 0; i < size; i++)
        {
                if(i==0)
                        leftSubProduct = 1;
                else
		{
                        leftSubProduct = leftSubProduct * arr[i-1];
			sol[i] = leftSubProduct;
		}
        }

	for(int i = size-1; i > -1; i--)
	{
		if(i == size-1)
		{
			rightSubProduct = 1;
		}
		else
		{
			rightSubProduct = rightSubProduct * arr[i+1];
			sol[i] = sol[i] * rightSubProduct;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		long sol[n] = {1};
	        mindbendingProduct(arr, n, sol);
		cout << "[";
		for(int i = 0; i < n; i++)
		{
			if(i == n-1)
				cout << sol[i];
			else
				cout << sol[i] << ",";
		}
		cout << "]" << endl;
	}
	return 0;
}
