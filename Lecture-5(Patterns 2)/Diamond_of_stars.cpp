#include<iostream>
using namespace std;

int main()
{
	int i=1,j=1,sp=1,n;
	int t = 1;
	int z;
	int div;

	cout<<"Enter n: ";
	cin>>n;

	div = n / 2;
	div++;

	while(i <= div)
	{
		sp = 1;
		while(sp <= (div - i))
		{
			cout<<" ";
			sp++;
		}
		j = 1;
		while(j <= t)
		{
			cout<<"*";
			j++;
		}
		i++;
		t = t + 2;
		cout<<endl;
	}

	i = 1;
	j = 1;
	sp = 1;
	if(n % 2 == 0)
	{
		t = 2;
	}
	else
	{
		t = 1;
	}

	z = (2 * (n - div - 1)) + 1;
	while(i <= (n-div))
	{
			sp = 1;
			while(sp <= t)
			{
				cout<<" ";
				sp++;
			}
			t++;
			
			j = 1;
			while(j <= z)
			{
				cout<<"*";
				j++;
			}
			z = z - 2;
			i++;
			cout<<endl;
	}
	return 0;
}