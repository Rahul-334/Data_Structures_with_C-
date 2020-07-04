#include<iostream>
using namespace std;


int main()
{
    int i=1,j,n,stars,k,z;
    
    cin>>n;
    
    while(i <= n)
    {
        j = 1;
        while(j <= (n-i+1))
        {
            cout<<j;
            j++;
        }
        stars = 1;
        k = 2 * (i-1);
        while(stars <= k)
        {
            cout<<"*";
            stars++;
        }
        z = n-i+1;
        while(z >= 1)
        {
            cout<<z;
            z--;
        }
        i++;
        cout<<endl;
    }
    return 0;
}