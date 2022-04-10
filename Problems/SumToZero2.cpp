/*
Given a random integer array A of size N. Find and print the count of pair of elements in the array which sum up to 0.
Note: Array A can contain duplicate elements as well.
Input: Line1: size of array.
       Line2: Elements of array.
Output: unique element.
Constraints: 0 <= N <= 10^4

Time Complexity = O(N)
Space Complexity = O(1)

Hint: take a map, if we got 'k' to insert then check if we have encountered any '-k'
      , if so then print (k,-k) number of times '-k' appeared. That counts the pair
      whose sum is 0.
*/
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tc = n;
    map<int,int> track;
    int count = 0;
    while(tc--)
    {
        int k;
        cin >> k;
        if(track[-k] !=0)
        {
            count += track[-k];
            for(int j = 0; j < track[-k]; j++)
            {
                cout << "(" << -k << "," << k <<")" << endl;
            }
        }
        track[k]++;
    }
    cout << count << endl;
    
    return 0;
}
