#include<iostream>
using namespace std;

int main()
{
	int n;
	int i=1,j=1,k=1,count = 1;

	cout<<"Enter n: ";
	cin>>n;

	while(i <= n)
	{
		j = 1;
		while(j <= i)
		{
			cout<<j;
			j = j + 1;
		}
		i = i + 1;
		cout<<endl;
	}

	cout<<"\n\n\n";

	i = 1;
	j = 1;
	k = 1;

	while(i <= n)
	{
		j = 1;
		while(j <= i)
		{
			cout<<k;
			j = j + 1;
			k = k + 1;
		}
		i = i + 1;
		cout<<endl;
	}

	cout<<"\n\n\n";

	i = 1;
	j = 1;
	k = 1;
	count = 1;

	while(i <= n)
	{
		k = 1;
		while(k <= (n-i))
		{
			cout<<" ";
			k = k + 1;
		}
		j = 1;
		while(j <= i)
		{
			cout<<count;
			count = count + 1;
			j = j + 1;
		}
		i = i + 1;
		cout<<endl;
	}
	return 0;
}