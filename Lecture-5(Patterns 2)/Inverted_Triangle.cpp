#include<iostream>
using namespace std;

int main()
{
	int i=1,j=1,n;

	cout<<"Enter n: ";
	cin>>n;

	while(i <= n)
	{
		j = n - i + 1;
		while(j >= 1)
		{
			cout<<"*";
			j--;
		}
		i++;
		cout<<endl;
	}
	return 0;
}