#include<iostream>
using namespace std;

int main()
{
	int n,d;
	int i,j,temp;

	cout<<"Enter n: ";
	cin>>n;

	cout<<"Enter shift value(d): ";
	cin>>d;

	int A[n];

	for(int z=0; z<n; z++)
	{
		cin>>A[z];
	}

	for(i=0,j=n-1; i<j; i++,j--)
	{
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}

	for(i=0,j=(n-d-1); i<j; i++,j--)
	{
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}

	for(i=(n-d),j=n-1; i<j; i++,j--)
	{
		temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}

	for(int z=0; z<n; z++)
	{
		cout<<A[z]<<" ";
	}
	return 0;
}