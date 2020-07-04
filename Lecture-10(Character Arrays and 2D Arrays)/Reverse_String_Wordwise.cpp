#include<iostream>
#include<climits>
using namespace std;

int maxdif(int A[], int n);

int main()
{
	char inp[50];
	int z;
	int i,len;
	int sp=0;

	cin.getline(inp,50);

	len=0;
	sp=0;
	while(inp[len] != '\0')
	{
		if(inp[len] == ' ')
			sp++;
		len++;
	}
	sp = sp + 2;

	int space_pos[sp];

	space_pos[0] = 0;
	z=0;
	i=0;
	while(inp[z] != '\0')
	{
		if(inp[z] == ' ' || inp[z] == '\n' || )
			space_pos[i++] = 
	}
}

int maxdif(int A[], int n)
{
	int md = INT_MIN;
	int dif;

	for(int i=n-1; i>0; i--)
	{
		dif = A[i] - A[i-1];
		if(dif > md)
			md = df;
	}
	return md;
}