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
Space Complexity - O(N)
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
        queue<int> Q;
        for(int i = 0; i<n; i++)
        {
            int j;
            cin >> j;
            Q.push(j);
        }
        int d;
        cin>>d;
        while(d--)
        {
            int out = Q.front();
            Q.pop();
            Q.push(out);
        }
        while(!Q.empty())
        {
            cout << Q.front() << " ";
            Q.pop();
        }
        cout << endl;
    }
    return 0;
}
