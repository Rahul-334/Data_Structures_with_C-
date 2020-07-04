#include<iostream>
using namespace std;

int main()
{
	int n;
	int i=1,j=1,sp=1;

	cout<<"Enter n: ";
	cin>>n;

	while(i <= n)
	{
		sp = 1;
		while(sp <= (n-i))
		{
			cout<<" ";
			sp++;
		}
		j = 1;
		while(j <= i)
		{
			cout<<"*";
			j++;
		}
		i++;
		cout<<endl;
	}
	return 0;
}