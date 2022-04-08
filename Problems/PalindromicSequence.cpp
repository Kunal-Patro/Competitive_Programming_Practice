/*
* Given a strings and we need to find 1 permutation of if any palindrome is possible with the characters of
* string, if any palindrome is possible then print the indexes of the characters in original string in palindromic
* sequence otherwise print -1 if no such possiblity.
* Input: Line1 : number of testcases.
*        Line2 : string.
* Output: indexes of characters or -1.
*/
#include<bits/stdc++.h>
using namespace std;

void
palindrome (string data)
{
  int len = data.length ();
  int arr[len];
  int left = 0, right = len-1;
  unordered_map < char, vector < int >>map;
  for (int i = 0; i < len; i++)
  {
      map[data[i]].push_back(i);
  }
  for(auto a : map)
  {
      cout << a.first << "----";
      for(auto b : a.second)
      {
          cout << b << "," ;
      }
      cout << endl;
  }
  int oddCount = 1;
  for(auto x : map)
  {
      int vecSize = x.second.size();
      if(vecSize % 2 == 1)
      {
          oddCount--;
      }
      if(oddCount < 0)
      {
          cout << -1;
          return;
      }
      for(int a = 0; a < vecSize; a+=2 )
      {
          if(vecSize - a == 1)
          {
              arr[len/2] = x.second[a];
          }
          else
          {
              arr[left] = x.second[a];
              left++;
              arr[right] = x.second[a+1];
              right--;
          }
          
      }
  }
  for(int d: arr)
  {
      cout<< d << " ";
  }
  cout<<endl;
}

int main ()
{
  int tc;
  cin >> tc;
  while (tc--)
    {
      string data;
      cin >> data;
      palindrome (data);
    }
  return 0;
}
