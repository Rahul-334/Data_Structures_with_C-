#include<iostream>
using namespace std;

int binary_search(int a[], int n, int key);

int main()
{
	int n,ans,key;

	cout<<"Enter size of the array: ";
	cin>>n;

	int A[n];

	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}

	cout<<"Enter the element to be searched: ";
	cin>>key;

	ans = binary_search(A,n,key);

	if(ans == -1)
		cout<<"Element not found..."<<endl;
	else
		cout<<"Element found at position: "<<ans<<endl;

	return 0;
}

int binary_search(int a[], int n, int key)
{
	int mid;
	int low = 0;
	int high = n-1;

	while(low < high)
	{
		mid = (low+high)/2;

		if(key == a[mid])
			return mid;
		else if(key < a[mid])
			high = mid-1;
		else
			low = mid+1;
	}
	return -1;
}