#include<iostream>
using namespace std;

int main()
{
	int row,col;
	int i,j;

	cout<<"Enter 2-D Array size: ";
	cin>>row>>col;

	int A[row][col];

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cin>>A[i][j];
		}
	}

	cout<<"Printing Elements Row-Wise..."<<endl;

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"Printing Elements Column-Wise..."<<endl;

	for(i=0; i<col; i++)
	{
		for(j=0; j<row; j++)
		{
			cout<<A[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}