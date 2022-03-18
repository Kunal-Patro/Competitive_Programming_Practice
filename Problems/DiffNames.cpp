/*
 * Given a list of students names, we have to identify that which name has more than one occurance, i.e. 2 or more students may have same name so which name has more than 1 count of students. Print them, but if no name has count more than 1 print -1.
 * Input: Name of students separated by space.
 * Output: Name which has count more than 1 and its count or -1 in case no such names. 
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	string word;
	getline(cin, input);
	vector<string> names;
	for(int i = 0 ; i < input.length(); i++)
	{
		if(input[i] != ' ')
		{
			word += input[i];
		}
		else
		{
			names.push_back(word);
			word.clear();
		}
	}
	names.push_back(word);

	// Mapping frequency count
	map<string, int> namesFq;
	vector<string> :: iterator it;
	for(it = names.begin(); it != names.end(); it++)
	{
		namesFq[*it]++;
	}

	// Checking if frequency is more than 1 then print
	map<string, int> :: iterator it1;
	bool noDuplicates = true;
	for(it1 = namesFq.begin(); it1 != namesFq.end(); it1++)
	{
		if(it1->second != 1)
		{
			cout << it1->first << " " << it1->second << endl;
			noDuplicates = false;
		}
	}
	if(noDuplicates)
		cout << -1 << endl;
	return 0;
}
