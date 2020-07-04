#include<iostream>
using namespace std;

int main()
{
	char inp[50];
	char ch;
	int i,j;

	cout<<"Enter string: ";
	cin.getline(inp,50);

	cout<<"Enter the character to be removed: ";
	cin>>ch;

	i=0;
	j=0;

	while(true)
	{
		while(inp[j] != '\0' && inp[j] != ch)
			j++;
		if(inp[j] == '\0')
			break;
		i = j;
		while(inp[i] != '\0')
		{
			inp[i] = inp[i+1];
			i++;
		}
	}
	cout<<"Modified String: "<<inp<<endl;
	return 0;
}