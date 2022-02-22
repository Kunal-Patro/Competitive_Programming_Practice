#include<iostream>
using namespace std;

int lastIndex(int* arr, int size, int key)
{
	int index = -1;
	if(size == 0)
		return -1;
	index = lastIndex(arr+1, size-1, key);
	if(arr[0] == key || index != -1) // Once we got first key's index from last we can now calculate its position from starting by adding 1 to every recursive call.
		return index+1;
	else
		return -1;
}
int main()
{
	int arr[] = {5,6,5,5,6};
	int ans = lastIndex(arr, 5, 6);
	cout<<"Last index for 5 is " << ans << endl;
	return 0;
}
