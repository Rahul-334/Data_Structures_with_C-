#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n,c=1,t,max1,max2;
	int cons_min = INT_MIN;
	bool flag = false;

	cin>>n;

	if(n == 0)
	{
		cout<<cons_min;
		return 0;
	}
	if(n == 1)
	{
		cin>>t;
		cout<<cons_min;
		return 0;
	}

	cin>>t;
	max1 = t;
	max2 = cons_min;

	while(c != n)
	{
		cin>>t;
		if(t > max1)
		{
			max2 = max1;
			max1 = t;
			flag = true;
		}
		else if((t > max2) && (t < max1))
		{
			max2 = t;
			flag = true;
		}
		c++;
	}
	if(flag == false)
	{
		cout<<cons_min;
	}
	else
	{
		cout<<max2;
	}
	return 0;
}