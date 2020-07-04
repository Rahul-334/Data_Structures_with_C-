#include<iostream>
using namespace std;

int main()
{
	char inp[50];
	int count=0;
	int i=0,j=0;
	char ch,temp;

	cout<<"Enter input string to be Compressed: ";
	cin.getline(inp,50);

	while(inp[j] != '\0')
	{
		ch = inp[j];
		count = 0;
		while((inp[j] != '\0') && (inp[j] == ch))
		{
			j++;
			count++;
		}
		if(count > 1)
		{
			inp[i] = ch;
			i++;
			count = count + 48;
			temp = count;
			inp[i] = temp;
			i++;
		}
		else
		{
			inp[i] = ch;
			i++;
		}
	}
	inp[i] = '\0';

	cout<<"Compressed Output String: "<<inp<<endl;
	return 0;
}