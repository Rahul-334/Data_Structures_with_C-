#include<iostream>
#include<cstring>
using namespace std;

void Print_All_Substrings(char str[]);

int main()
{
	char inp[20];

	cout<<"Enter a string to know all of it's substrings: ";
	cin>>inp;

	Print_All_Substrings(inp);
	return 0;
}

void Print_All_Substrings(char str[])
{
	int i,j,k,z,start,end,len;

	len = strlen(str);

	for(z=0,i=len; i>0; i--,z++)
	{
		start = 0;
		end = z;
		for(j=0; j<i; j++)
		{
			for(k=start; k<=end; k++)
			{
				cout<<str[k];
			}
			cout<<endl;
			start++;
			end++;
		}
	}
}