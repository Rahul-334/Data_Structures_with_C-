#include<iostream>
using namespace std;

int main()
{
	int n;
	int i=0,j=0,c=0,flag=0,temp;

	cout<<"Enter size of the array: ";
	cin>>n;

	int A[n];

	cout<<"Enter array elements..."<<endl;

	for(int z=0; z<n; z++)
	{
		cin>>A[z];
	}

	while(i < n)
	{
		while(A[i] == c)
		{
			i++;
			if(i == n)
			{
				flag = 2;
				break;
			}

		}
		if(j == 0 || (j == n-1))
			j = i;
		while(A[j] != c)
		{
			if(j == (n-1))
			{
				if(flag == 1)
				{
					flag = 2;
					break;
				}
				else
				{
					flag++;
					c = 1;
					j = i + 1;
				}
			}
			else
			{
				j++;
			}
		}

		if(flag != 2)
		{
			if(j == (n-1))
				c++;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
		else
		{
			break;
		}
	}

	for(int z=0; z<n; z++)
	{
		cout<<A[z]<<" ";
	}
	return 0;
}