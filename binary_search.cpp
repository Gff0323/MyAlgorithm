#include <iostream>
using namespace std;

int arr[] = {1,2,3,4,5,6,7,8};
int n = sizeof(arr)/sizeof(*arr);

int binary_search(int *arr, int n, int target)
{
	int l = 0, r = n - 1;
	while(l <= r)
	{
		int mid = l + (r - l) / 2;
		if(arr[mid] == target)
			return mid;
		else if(arr[mid] < target)
			l = mid + 1;
		else 
			r = mid - 1;
	}
	return -1;
}

int main()
{
	int target = 5;
	int index = binary_search(arr, n, target);
	cout << index;
	return 0;
}
