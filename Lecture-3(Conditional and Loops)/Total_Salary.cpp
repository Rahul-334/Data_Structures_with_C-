#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int basic;
	char grade;
	double total;
	int ans;

	cout<<"Enter basic Salary: ";
	cin>>basic;

	cout<<"Enter Grade(in capital): ";
	cin>>grade;

	total = basic + (0.2 * basic) + (0.5 * basic) - (0.11 * basic);

	if(grade == 'A')
	{
		total = total + 1700;
	}
	else if(grade == 'B')
	{
		total = total + 1500;
	}
	else
	{
		total = total + 1300;
	}
	ans = round(total);
	cout<<"Total Salary: "<<ans<<endl;
	return 0;
}