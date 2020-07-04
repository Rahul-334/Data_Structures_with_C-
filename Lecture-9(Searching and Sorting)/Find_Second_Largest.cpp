#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n;
	int m1,m2;

	cout<<"Enter n: ";
	cin>>n;

	int A[n];

	for(int z=0; z<n; z++)
	{
		cin>>A[z];
	}

	if(n == 0)
	{
		cout<<"Second Largest Element in the Array: "<<INT_MIN<<endl;
	}
	else if(n == 1)
	{
		cout<<"Second Largest Element in the Array: "<<A[0]<<endl;
	}
	else
	{
		m1 = A[0];
		m2 = INT_MIN;

		for(int i=1; i<n; i++)
		{
			if(A[i] > m1)
			{
				m2 = m1;
				m1 = A[i];
			}
			else if((A[i] > m2) && (A[i] < m1))
			{
				m2 = A[i];
			}
		}
		cout<<"Second Largest Element in the Array: "<<m2<<endl;
	}
	return 0;
}