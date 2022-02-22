#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> allIndex(int* arr, int size, int key)
{
	static vector<int> output;
	if(size == 0)
		return output;
	int vecsize = (allIndex(arr+1, size-1, key)).size();
	if(vecsize != 0)			// update every index by one if something is there in index array
	{
		for(int i = 0; i< output.size(); i++)
		{
			output[i]++;
		}
	}
	if(arr[0] == key)   			// insert 0 at back evey time if there is appearence of the key
                output.push_back(0);

	return output;
}
int main()
{
	vector<int> output;
	int arr[] = {5,6,5,5,6};
	output = allIndex(arr, 5, 9);
	reverse(output.begin(), output.end()); // As we are pushing at back so we will get reverse array we have to reverse it to get in order.
	int ans = output.size();
	cout<<"Total no of 5 in array is "<< ans << endl;
	for(int i = 0; i < output.size(); i++)
	{
		cout<< output[i] << " ";
	}
	return 0;
}
