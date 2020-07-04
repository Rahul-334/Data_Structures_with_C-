#include<iostream>
using namespace std;

int main()
{
	int row,col;

	cout<<"Enter number of rows: ";
	cin>>row;

	cout<<"Enter number or columns: ";
	cin>>col;

	int A[row][col];

	for(int z1=0; z1<row; z1++)
	{
		for(int z2=0; z2<col; z2++)
		{
			cin>>A[z1][z2];
		}
	}

	bool right;
	bool down;

	int i,j,x,y,k;

	int up_start,down_start,left_start,right_start;

	int row_lim_down,col_lim_up;
	int row_lim_left,col_lim_right;

	int c;
	int count=0;

	right = true;
	down = true;

	i = 0;
	j = col-1;
	x = row-1;
	y = 0;

	up_start = row - 1;
	down_start = 0;
	left_start = col - 1;
	right_start = 0;

	col_lim_right = col - 1;
	row_lim_left = 0;
	row_lim_down = row - 1;
	col_lim_up = 0;

	c = 1;

	cout<<"The input 2-D array is as follows:::"<<endl;

	for(int z1=0; z1<row; z1++)
	{
		for(int z2=0; z2<col; z2++)
		{
			cout<<A[z1][z2]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"Spiral Trace of the input 2-D array is as follows:::"<<endl;

	while(c != 0)
	{
		c = 0;

		if(right == true)
		{
			for(k=right_start; k<col_lim_right; k++)
			{
				cout<<A[i][k]<<" ";
				c++;
				count++;
			}
			right = false;
			col_lim_right--;
			right_start++;
			i++;
		}
		else
		{
			for(k=left_start; k>row_lim_left; k--)
			{
				cout<<A[x][k]<<" ";
				c++;
				count++;
			}
			right = true;
			row_lim_left++;
			left_start--;
			x--;
		}

		if(down == true)
		{
			for(k=down_start; k<row_lim_down; k++)
			{
				cout<<A[k][j]<<" ";
				c++;
				count++;
			}
			down = false;
			row_lim_down--;
			down_start++;
			j--;
		}
		else
		{
			for(k=up_start; k>col_lim_up; k--)
			{
				cout<<A[k][y]<<" ";
				c++;
				count++;
			}
			down = true;
			col_lim_up++;
			up_start--;
			y++;
		}
		if(count == (row*col))
			break;
	}
	if(count != (row*col))
	{
		cout<<A[row/2][col/2]<<" ";
	}
	return 0;
}