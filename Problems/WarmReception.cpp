/*
 * Given the appointment's arrival and departure time of customers for the day. We have to decide how many seats should we order such that we have no extra seats than required and none of the customers has to stand.
 * Input:
 * 	Line1: number of customers for the day.
 * 	Line2: Arrival time of each customer separated by space.
 * 	Line3: Departure of each customer separated by space.
 * Output: number of optimal seats required.
 * Constraints: 1 <= N <= 100
 * 		Time: 1 Sec.
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	map<int,int> arrival;
	map<int,int> departure;
	for(int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		arrival[val]++;
	}
	for(int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		departure[val]++;
	}
	int count = 0, maxCount = 0;
	for(int i = 0; i < 2360; i++)
	{
		if(departure.find(i) != departure.end())
		{
			count -= departure.count(i);
		}
		if(arrival.find(i) != arrival.end())
		{
			count += arrival.count(i);
		}
		maxCount = count > maxCount ? count : maxCount;
	}
	cout << maxCount << endl;

	return 0;
}
