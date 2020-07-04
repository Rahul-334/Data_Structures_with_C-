#include<iostream>
using namespace std;

int leng(char input[]);

int main()
{
	char str[50];
	int i,j;
	bool flag=true;
	int len;

	cout<<"Enter string to check whether it is palindrome or not: ";
	cin>>str;

	len = leng(str);

	i=0;
	j=len-1;
	while(i < (len/2))
	{
		if(str[i] == str[j])
		{
			i++;
			j--;
		}
		else
		{
			flag = false;
			break;
			//cout<<"NOT PALINDROME..."<<endl;
		}
	}
	if(flag == true)
		cout<<"PALINDROME"<<endl;
	else
		cout<<"NOT PALINDROME"<<endl;

	return 0;
}

int leng(char input[])
{
	int i=0;

	while(input[i] != '\0')
		i++;
	return i;
}