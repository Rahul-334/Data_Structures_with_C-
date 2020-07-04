#include<iostream>
using namespace std;

int main()
{
	int n;
	int i,j,sp,temp;

	cout<<"Enter n: ";
	cin>>n;

	i = 1;
	j = 1;
	sp = 1;

	while(i <= n)
	{
		sp = 1;
		while(sp <= (n-i))
		{
			cout<<" ";
			sp = sp + 1;
		}
		j = 1;
		temp = i;
		while(j <= i)
		{
			cout<<temp;
			temp = temp + 1;
			j = j + 1;
		}
		i = i + 1;
		cout<<endl;
	}
	return 0;
}