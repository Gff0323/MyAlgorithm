#include <iostream>
using namespace std;

int arr[] = {1,1,1,2,2,3,3,3,3,4,4,4,5,6,7};
int n = sizeof(arr)/sizeof(*arr);

int bs_left(int *arr, int n, int target)
{
	int l = 0, r = n - 1;
	int index = -1;
	while(l <= r)
	{
		int mid =  l + (r - l) / 2;
		if(arr[mid] == target)
		{
			index = mid;
			r = mid - 1;
		}
		else if(arr[mid] > target)
			r = mid - 1;
		else 
			l = mid + 1;
	}
	return index;
}

int bs_right(int *arr, int n, int target)
{
	int l = 0, r = n - 1;
	int index = -1;
	while(l <= r)
	{
		int mid =  l + (r - l) / 2;
		if(arr[mid] == target)
		{	
			index = mid;
			l = mid + 1;
		}
		else if(arr[mid] > target)
			r = mid - 1;
		else 
			l = mid + 1;
	}
	return index;
}

int main()
{
	int target = 3;
	//int index = bs_left(arr,n,target);
	cout << "left: "  << bs_left(arr,n,target)  << endl;
	cout << "right: " << bs_right(arr,n,target) << endl;
	return 0;
}
