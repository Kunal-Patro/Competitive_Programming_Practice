/*
 * Given number of students with there names and marks in 3 subjects. We have to give the positions based on overall performance of each student.
 * Input:
 * 	Line1: Number of students.
 * 	Line2: Name of student followed by its marks separated by space.
 * 	Repeat 2 till data of all students are registered.
 * Output: Name of students position wise.
 * Constraints: 1 <= n <= 10^5
 * 		0 <= m1, m2, m3 <= 100
 */
#include<bits/stdc++.h>
using namespace std;

bool myComp(pair<string,vector<int>> i, pair<string, vector<int>> j)
{
	return (i.second[3] > j.second[3]);
}

int main()
{
	int n;
	cin>>n;
	vector<pair<string,vector<int>>> data(n,make_pair("",vector<int>(4)));
	for(int i = 0; i < n; i++)
	{
		int total = 0;
		cin >> data[i].first;
		for(int j = 0; j < 3; j++)
		{	
			cin >> data[i].second[j];
			total += data[i].second[j];
		}
		data[i].second[3] = total;
	}

	stable_sort(data.begin(), data.end(), myComp);

	//vector<pair<string,int[4]>> :: iterator it;
	for(int i = 0; i < n; i++)
	{
		cout << data[i].first << endl;
	}
	return 0;
}
