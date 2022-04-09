/*
* You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). 
Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3, 
and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
Input : Line1: Number of testcases.
        Line2: Number of elements in first testcase.
        Line3: elements of first testcase.
Output: Dublicate Number
Constraints: 1 <= t <= 10^2
             0 <= N <= 10^6
             
Time Complexity - O(N)
Space Complixity - O(N)
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
        set<int> list;
        for(int i = 0; i<n; i++)
        {
            int j;
            cin >> j;
            if(list.find(j) != list.end())
            {
                cout<<j;
            }
            else
            {
                list.insert(j);
            }
        }
    }
    return 0;
}
