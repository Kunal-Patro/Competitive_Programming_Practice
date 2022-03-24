/*
 * Given an array of repeating numbers, 2 persons are playing game using that array.
 * Rules are as such:
 * Highest number is to be taken out and divided by 2 if the updated number is greater than 0 then it is to be added again to array.
 * So other person has to tell the next number to be taken out in particular iteration before it is actually computed.
 * Input: Line1: number of elements in array and number of queries.
 * 	  Line2: elements of array.
 * 	  Line3: query (iteration to which number to be taken out has to be predicted).
 * Output: Answer of particular query.
 * Constraints: 1 <= n,m <= 10^6.
 * Note: Query is provided in cronological order.
 */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	ll arr[n];
	int ques[m];
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for(int i = 0; i < m; i++)
	{
		cin>>ques[i];
	}
	sort(arr, arr+n);
	for(int a : arr)
	{
		cout << a << " ";
	}
	cout << endl;
	queue<int> Q;
	int end_p = n-1;
	int itr = ques[m-1];
	int count = 0, i = 0;
	while(itr--)
	{
		count++;
		ll outNum;
		if(Q.empty() && (end_p < 0))
		{
			cout << "Array empty" << endl;
			return 0;
		}
		if(Q.empty() || Q.front() <= arr[end_p])
		{
			outNum = arr[end_p];
			end_p--;
		}
		else
		{
			outNum = Q.front();
			Q.pop();
		}
		if(count == ques[i])
		{
			cout << outNum << endl;
			i++;
		}
		outNum /= 2;
		if(outNum > 0)
		{
			Q.push(outNum);
		}
	}
	return 0;
}
