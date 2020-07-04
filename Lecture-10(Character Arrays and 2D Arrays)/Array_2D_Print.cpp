#include<iostream>
using namespace std;

void print2Darray(int inp[][4], int m, int n);

int main()
{
	int row,col;

	cout<<"Enter the number of rows and columns in your 2D array: ";
	cin>>row>>col;

	int A[4][4];

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin>>A[i][j];
		}
	}
	print2Darray(A,row,col);
	return 0;
}

void print2Darray(int inp[][4], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<inp[i][j]<<" ";
		}
		cout<<endl;
	}
}