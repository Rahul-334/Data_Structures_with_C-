#include<iostream>
using namespace std;

int main()
{
	int n;
	int i,j;
	char ch;
	int t;

	cout<<"Enter n: ";
	cin>>n;

	t = n;

	while(i <= n)
	{
		j = 1;
		ch = 'A' + t;
		while(j <= i)
		{
			cout<<ch;
			j++;
			ch++;
		}
		i++;
		t--;
		cout<<endl;
	}
	return 0;
}