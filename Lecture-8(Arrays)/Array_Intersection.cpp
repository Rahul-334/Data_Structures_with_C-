#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int A[7] = {1,2,3,2,1,3,3};
	int B[6] = {2,1,1,1,3,3};

	for(int i=0; i<7; i++)
	{
		for(int j=0; j<6; j++)
		{
			if(A[i] == B[j])
			{
				cout<<A[i]<<endl;
				B[j] = INT_MIN;
				break;
			}
		}
	}
	return 0;
}