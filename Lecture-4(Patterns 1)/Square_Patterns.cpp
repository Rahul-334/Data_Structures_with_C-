#include<iostream>
using namespace std;

int main()
{
	int n;
	int i=1,j=1;

	cout<<"Enter n: ";
	cin>>n;

	while(i <= n)
	{
		j = 1;
		while(j <= n)
		{
			cout<<i;
			j++;
		}
		i++;
		cout<<endl;
	}

	cout<<"\n\n";

	i=1;
	j=1;

	while(i <= n)
	{
		j = 1;
		while(j <= n)
		{
			cout<<j;
			j++;
		}
		i++;
		cout<<endl;
	}

	cout<<"\n\n";

	i = 1;
	j = 1;

	while(i <= n)
	{
		j = n;
		while(j >= 1)
		{
			cout<<j;
			j--;
		}
		i++;
		cout<<endl;
	}

	return 0;
}