/*
 * Given a string, we have to print unique characters in the order they appear.
 * Input: Line1: String
 * output: string of unique characters in same order as they appear
 * Constarints: 1 <= n <= 10^8
 * 		Time : 1sec
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	getline(cin, input);
	set<char> output;
	for(int i = 0; i < input.length(); i++)
	{
		if(output.find(input[i]) == output.end())
		{
			output.insert(input[i]);
			cout << input[i];
		}
	}
	cout << endl;
	return 0;
}
