#include<iostream>
using namespace std;

int main()
{
	int i,pos,n,cnt = 0,flag=0;
	int temp;

	cout<<"Enter n: ";
	cin>>n;

	int A[n];

	cout<<"Enter Array elements..."<<endl;

	for(int z=0; z<n; z++)
	{
		cin>>A[z];
	}

	i = 0;
	pos = 0;

	while(i < n)
	{
		while(A[pos] != 0)
		{
			pos++;
		}
		if(cnt == 0)
		{
			cnt = 1;
			i = pos;
			while(A[i] == 0)
				i++;
			temp = A[i];
			A[i] = A[pos];
			A[pos] = temp;
		}
		else
		{
			while(A[i] == 0)
			{
				if(i == (n-1))
				{
					flag = 1;
					break;
				}
				else
				{
					i++;
				}
			}
			temp = A[i];
			A[i] = A[pos];
			A[pos] = temp;
			if(flag == 1)
			{
				i++;
			}
		}
	}

	for(int z=0; z<n; z++)
	{
		cout<<A[z]<<" ";
	}
}