#include<iostream>
using namespace std;

void Selection_Sort(int a[], int n);

int main()
{
	int n;

	cout<<"Enter n: ";
	cin>>n;

	int A[n];

	cout<<"Enter Array elements..."<<endl;

	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}

	Selection_Sort(A,n);

	cout<<"Array after performing Selection_Sort function...."<<endl;

	for(int i=0; i<n; i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}

void Selection_Sort(int a[], int n)
{
	int j,min,pos,temp;

	for(int i=0; i<n-1; i++)
	{
		min = a[i];
		pos = i;
		for(j = i+1; j<n; j++)
		{
			if(min > a[j])
			{
				min = a[j];
				pos = j;
			}
		}
		temp = a[i];
		a[i] = a[pos];
		a[pos] = temp;
	}
}