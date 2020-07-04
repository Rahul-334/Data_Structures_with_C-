#include<iostream>
using namespace std;

int main()
{
	int i=1,j=1,sp=1,n;

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
			cout<<j;
			j++;
		}
		j = i - 1;
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