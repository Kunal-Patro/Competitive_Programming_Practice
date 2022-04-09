/*
* You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
Input : Line1: Number of testcases.
        Line2: Number of elements in first testcase.
        Line3: elements of first testcase.
        Line4: Number of rotations.
Output: rotated array.
Constraints: 1 <= t <= 10^4
             0 <= N <= 10^6
             0 <= D <= N
Time Complexity - O(N)
Space Complexity - O(1)
*/
#include<bits/stdc++.h>
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
        for(int i = 0; i<n; i++)
        {
            cin >> arr[i];
            
        }
        int d;
        cin>>d;
        reverse(arr, arr+n);
        reverse(arr, arr+(n-d));
        reverse(arr+(n-d), arr+n);
        for(int i = 0; i<n; i++)
        {
            cout<< arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
