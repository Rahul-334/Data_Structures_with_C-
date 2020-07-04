#include<iostream>
using namespace std;

int main()
{
	char ch;
	int val;

	cout<<"Enter character: ";
	cin>>ch;

	val = ch;

	//cout<<val<<endl;

	if(val >= 65 && val <= 90)
	{
		cout<<"1"<<endl;
	}
	else if(val >= 97 && val <= 122)
	{
		cout<<"0"<<endl;
	}
	else
	{
		cout<<"-1"<<endl;
	}
	return 0;
}