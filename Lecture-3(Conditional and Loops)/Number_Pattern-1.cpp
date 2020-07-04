#include<iostream>
using namespace std;

int main()
{
	int n;
	int i,j,temp;

	cout<<"Enter n: ";
	cin>>n;

	i = 1;
	j = 1;

	while(i <= n)
	{
		temp = i;
		j = 1;
		while(j <= i)
		{
			cout<<temp;
			temp = temp + 1;
			j = j + 1;
		}
		i = i + 1;
		cout<<endl;
	}
}