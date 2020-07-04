#include <iostream>
using namespace std;

int main()
{
    int i=1,j=1,sp=1,n,t;
    
    cin>>n;
    
    while(i <= n)
    {
        sp = 1;
        while(sp <= (n-i))
        {
            cout<<" ";
            sp++;
        }
        j = 1;
        t = i;
        while(j <= i)
        {
            cout<<t;
            j++;
            t++;
        }
        t = t - 2;
        while(t >= i)
        {
            cout<<t;
            t--;
        }
        i++;
        cout<<endl;
    }
}