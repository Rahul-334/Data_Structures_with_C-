#include<iostream>
using namespace std;

int main()
{
	int n;
	int i,j,c,temp;
	bool flag;

	cout<<"Enter n: ";
	cin>>n;

	int A[n];

	for(int z=0; z<n; z++)
	{
		cin>>A[z];
	}

	i=0;
	j=n-1;
	c=0;
	flag = false;

	while(i < n)
	{
		while(A[i] == c)
		{
			i++;
			if(i == n)
				break;
		}
		if(i == n)
			break;
		while(A[j] != c)
		{
			if(i == j)
			{
				c++;
				j = n-1;
				flag = true;
				break;
			}
			else
			{
				j--;
			}
		}
		if(flag == false)
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
		else
		{
			flag = false;
		}
	}

	for(int z=0; z<n; z++)
	{
		cout<<A[z]<<" ";
	}
	return true;
}