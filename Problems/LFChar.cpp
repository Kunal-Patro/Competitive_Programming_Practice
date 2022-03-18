/*
 * Ayush loves the characters 'a', 's', 'p'. He got a string of lowercase letters and he wants to find out how many times characters 'a', 's' and 'p' occures in the string respectively.
 * Input: 
 * 	Line1: number of characters in string.
 * 	Line2: String.
 * Constraints: 1 <= n <= 10^5
 * 		'a' <= each character <= 'z'
 * Output: occurances of 'a', 's', 'p' with space separated.
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char text[n];
	cin>>text;
	map<char,int> count;
	for(int i = 0; i < n; i++)
	{
		if(text[i] == 'a' || text[i] == 's' || text[i] == 'p')
		{
			count[text[i]]++;
		}
	}
	cout << count['a'] << " " << count['s'] << " " << count['p'] << endl;
	return 0;
}
