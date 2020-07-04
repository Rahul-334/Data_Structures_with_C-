#include<iostream>
using namespace std;

int main()
{
	int i,j,n1,n2;
	int k,temp;
	int sum,mod;

	cout<<"Enter size of Array1: ";
	cin>>n1;
	int A[n1];

	cout<<"Enter elements for Array1..."<<endl;

	for(int z=0; z<n1; z++)
	{
		cin>>A[z];
	}

	cout<<"Enter size of Array2: ";
	cin>>n2;
	int B[n2];

	cout<<"Enter elements of Array2..."<<endl;

	for(int z=0; z<n2; z++)
	{
		cin>>B[z];
	}

	if(n1 > n2)
		k = n1;
	else
		k = n2;

	k++;
	temp = k;
	int C[k];

	for(int z=0; z<k; z++)
		C[z] = 0;

	i = n1-1;
	j = n2-1;
	k = k - 1;

	//cout<<i<<" "<<j<<" "<<k<<endl;

	while((i >= 0) && (j >= 0))
	{
		//cout<<"i = "<<i<<" "<<"j = "<<j<<endl;
		sum = A[i] + B[j];
		i--;
		j--;
		if(sum <= 9)
		{
			C[k--] = sum;
		}
		else
		{
			mod = sum%10;
			C[k--] = mod;
			if(i >= 0)
				A[i]++;
			else if(j >= 0)
				B[j]++;
			else
			{
				C[k--] = 1;
			}
		}
	}

	while(i >= 0)
	{
		C[k--] = A[i];
		i--;
	}
	while(j >= 0)
	{
		C[k--] = B[j];
		j--;
	}

	for(int z=0; z<temp; z++)
	{
		cout<<C[z]<<" ";
	}
	return 0;
}