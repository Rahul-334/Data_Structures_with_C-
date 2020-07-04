#include<iostream>
using namespace std;

void findunique(int* A, int n);

int main()
{
	int A[] = {1,2,3,4,5,1,3,4,2};
	findunique(A,9);
	return 0;
}

void findunique(int* A, int n)
{
	int ans = A[0]^A[1];

	for(int i=2; i<n; i++)
	{
		ans = ans ^ A[i];
	}

	cout<<"Unique element: "<<ans<<endl;
}