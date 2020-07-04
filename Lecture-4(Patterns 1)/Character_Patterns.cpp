#include<iostream>
using namespace std;

int main()
{
	int n;
	int i=1,j=1;
	char ch = 'A';

	cout<<"Enter n: ";
	cin>>n;

	while(i <= n)
	{
		ch = 'A';
		j = 1;
		while(j <= n)
		{
			cout<<ch;
			ch++;
			j++;
		}
		i++;
		cout<<endl;
	}

	cout<<"\n\n";

	i = 1;
	j = 1;
	ch = 'A';

	while(i <= n)
	{
		j = 1;
		ch = 'A' + i - 1;
		while(j <= n)
		{
			cout<<ch;
			j++;
			ch++;
		}
		i++;
		cout<<endl;
	}
	return 0;
}