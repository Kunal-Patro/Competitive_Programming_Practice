/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
Input: Line1: Number of testcases.
       Line2: Number of elements in first testcase.
       Line3: Elements of first testcase.
Output: unique element.
Constraints: 1 <= t <= 10^2
             0 <= N <= 10^6

Time Complexity = O(N)
Space Complexity = O(1)

Hint: Xor operation is associative
      Xor operation with same numbers is 0
      Xor operation with 0 is the number itself so dublicates will give 0s and remaining non duplicate will left.
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        int Xor = 0;
        for(int i = 0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i<n; i++)
        {
            Xor ^= arr[i];    
        }
        cout<< Xor << endl;
    }
    return 0;
}
