#include<iostream>
using namespace std;

int main()
{
	int n;
	int i=1,j=1,temp;

	cout<<"Enter n: ";
	cin>>n;

	while(i <= n)
	{
		j = 1;
		while(j <= i)
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
		temp = i;
		j = 1;
		while(j <= i)
		{
			cout<<temp;
			j++;
			temp++;
		}
		i++;
		cout<<endl;
	}

	cout<<"\n\n";

	i = 1;
	j = 1;
	temp = 1;

	while(i <= n)
	{
		j = 1;
		while(j <= i)
		{
			cout<<temp;
			j++;
			temp++;
		}
		i++;
		cout<<endl;
	}
	return 0;
}