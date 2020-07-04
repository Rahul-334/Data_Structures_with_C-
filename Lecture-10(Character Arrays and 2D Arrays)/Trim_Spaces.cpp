#include<iostream>
using namespace std;

int main()
{
	char inp[20];
	int len=0;

	cin.getline(inp,20);

	len = 0;
	while(inp[len] != '\0')
		len++;

	char temp[len];
	int j,k;

	j = 0;
	k = 0;
	while(inp[j] != '\0')
	{
		if(inp[j] != ' ')
			temp[k++] = inp[j];
		j++;
	}

	j = 0;

	while(j < k)
	{
		inp[j] = temp[j];
		j++;
	}
	inp[j] = '\0';
	//cout<<inp[j]<<endl;
	cout<<inp<<endl;

	return 0;
}