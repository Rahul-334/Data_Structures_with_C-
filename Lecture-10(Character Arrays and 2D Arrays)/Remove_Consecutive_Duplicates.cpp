#include<iostream>
using namespace std;

int main()
{
	char inp[100];
	char ch;
	int i,j;

	cout<<"Enter input string: ";
	cin>>inp;

	i=0;
	j=0;

	while(true)
	{
		ch = inp[i]; 
		while(inp[j] == ch)
			j++;
		if(inp[j] == '\0')
			break;
		while(j != i+1)
		{
			inp[j-1] = inp[j];
			j--;
		}
		i++;
	}
	inp[++i] = '\0';
	cout<<inp<<endl;
	return 0;
}