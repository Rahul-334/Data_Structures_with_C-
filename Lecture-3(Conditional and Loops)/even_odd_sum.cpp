#include<iostream>
using namespace std;

int main()
{
    int n,mod;
    int evensum = 0;
    int oddsum = 0;
    
    cin>>n;
    
    while(n > 0)
    {
        mod = n % 10;
        if((mod%2) == 0)
        {
            evensum = evensum + mod;
        }
        else
        {
            oddsum = oddsum + mod;
        }
        n = n / 10;
    }
    cout<<evensum<<"   "<<oddsum;
    return 0;
}