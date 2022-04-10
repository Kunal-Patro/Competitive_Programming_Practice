/*
Given a random integer array A of size N. Find and print the count of pair of elements in the array which sum up to 0.
Note: Array A can contain duplicate elements as well.
Input: Line1: size of array.
       Line2: Elements of array.
Output: unique element.
Constraints: 0 <= N <= 10^4

Time Complexity = O(N^2)
Space Complexity = O(1)

*/
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tc = n;
    int arr[n];
    while(tc--)
    {
        cin >> arr[n-tc];
    }
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i]+arr[j] == 0)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
