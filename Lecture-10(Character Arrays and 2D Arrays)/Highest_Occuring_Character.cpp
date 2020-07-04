#include<iostream>
#include<climits>
using namespace std;

/*int main()
{
	char inp[50];
	int alpha[125] = {0};
	int i=0;
	int c;
	int start = 97;
	int max = INT_MIN;
	int pos;
	char ans;

	cout<<"Enter string: ";
	cin>>inp;

	while(inp[i] != '\0')
	{
		c = inp[i];
		alpha[c]++;
		i++;
	}
	while(start <= 123)
	{
		if(alpha[start] > max)
		{
			max = alpha[start];
			pos = start;
		}
		start++;
	}
	ans = pos;
	cout<<"Highest Occuring Character: "<<ans<<endl;
	return 0;
}*/

bool search(char a[], char c);
int main()
{
	char inp[50];
	char check[26];
	char ch;
	int i=0,j;
	int count = 0;
	int max = INT_MIN;
	char ans;

	for(int z=0; z<26; z++)
		check[z] = ' ';
	cout<<"Enter input string: ";
	cin.getline(inp,50);

	while(inp[i] != '\0')
	{
		ch = inp[i];
		if(search(check,ch) == false)
		{
			count = 0;
			j = i;
			while(inp[j] != '\0')
			{
				if(ch == inp[j])
					count++;
				j++;
			}
			if(count > max)
			{
				max = count;
				ans = ch;
			}
		}
		i++;
	}
	cout<<"Highest Occuring Character: "<<ans<<endl;
	return 0;
}

bool search(char a[], char c)
{
	int i=0;

	while(a[i] != '\0')
	{
		if(a[i] == c)
			return true;
		i++;
	}
	return false;
}