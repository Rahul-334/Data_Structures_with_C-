#include<iostream>
using namespace std;

int getlength(char input[]);


//Another approach is also possible in which you first reverse the entire input string and then reverse each individual word.
//Try it out...If you wanna check...

int main()
{
	char inp[50];
	//char ans[50];

	cin.getline(inp,50);

	int j,m,n,cnt=0;
	int len;
	int z;

	len = getlength(inp);
	char ans[len];

	j = len-1;
	m = len-1;
	n = len-1;

	while(j >= 0)
	{
		while((j >= 0) && (inp[j] != ' '))
			j--;
		m = j+1;
		j--;
		for(int i=m; i<=n; i++)
			ans[cnt++] = inp[i];
		if(j >= 0)
			ans[cnt++] = ' ';
		else
			ans[cnt] = '\0';
		n = m-2;
	}

	cout<<"INPUT ARRAY(before): "<<inp<<endl;

	z=0;
	while(ans[z] != '\0')
	{
		inp[z] = ans[z];
		z++;
	}
	inp[z] = '\0';

	cout<<"INPUT ARRAY(after): "<<inp<<endl;
	return 0;
}

int getlength(char input[])
{
	int i=0;

	while(input[i] != '\0')
		i++;
	return i;
}