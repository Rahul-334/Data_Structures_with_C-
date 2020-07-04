#include<iostream>
using namespace std;

void Insertion_Sort(int a[], int n);

int main()
{
	int n;

	cout<<"Enter number of elements in the list: ";
	cin>>n;

	int A[n];

	cout<<"Enter Array elements...."<<endl;

	for(int i=0; i<n; i++)
	{
		cin>>A[i];
	}

	Insertion_Sort(A,n);

	for(int i=0; i<n; i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}

void Insertion_Sort(int a[], int n)
{
	int current;
	int j;

	for(int i=1; i<n; i++)
	{
		j = i - 1;
		current = a[i];
		while(j >= 0)
		{
			if(current < a[j])
				a[j+1] = a[j];
			else
				break;
			j--;
		}
		a[j+1] = current;
	}
}