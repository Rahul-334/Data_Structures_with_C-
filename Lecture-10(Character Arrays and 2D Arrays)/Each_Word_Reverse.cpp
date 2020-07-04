#include<iostream>
using namespace std;

int main()
{
	char inp[50];
	char temp;
	int k=0;
	int i=0;
	int j=0;

	cout<<"Enter input string: ";
	cin.getline(inp,50);

	while(inp[k] != '\0')
	{
		while((inp[k] != '\0') && (inp[k] != ' '))
			k++;
		j = k - 1;
		while(i < j)
		{
			temp = inp[i];
			inp[i] = inp[j];
			inp[j] = temp;
			i++;
			j--;
		}
		if(inp[k] == '\0')
			break;
		k++;
		i = k;
	}
	cout<<"Each Word Reversed output: "<<inp<<endl;
	return 0;
}