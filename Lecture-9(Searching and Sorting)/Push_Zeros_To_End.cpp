#include<iostream>
using namespace std;

int main()
{
	int n,pos,temp,i=0;
	int flag = 0;

	cout<<"Enter the size of the array: ";
	cin>>n;

	int A[n];

	cout<<"Enter array elements..."<<endl;

	for(int k=0; k<n; k++)
	{
		cin>>A[k];
	}

	while(i < n)
	{
		if(A[i] != 0)
		{
			i++;
			continue;
		}
		else
		{
			pos = i;
			while(A[i] == 0)
			{
				if(i == (n-1))
				{
					flag = 1;
					break;
				}
				else
					i++;
			}
			if(flag == 1)
				break;
			else
			{
				temp = A[pos];
				A[pos] = A[i];
				A[i] = temp;
				if(i == (n-1))
					break;
				else
					i = pos + 1;
			}
		}
	}

	for(int k=0; k<n; k++)
	{
		cout<<A[k]<<" ";
	}
	return 0;
}