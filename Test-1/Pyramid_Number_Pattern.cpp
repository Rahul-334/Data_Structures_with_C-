#include<iostream>
using namespace std;

int main()
{
    int i=1,j,n;
    int sp = 1;
    int t = 2;
    
    cin>>n;
    
    while(i <= n)
    {
        sp = 1;
        while(sp <= (n-i))
        {
            cout<<" ";
            sp++;
        }
        j = i;
        while(j >= 1)
        {
            cout<<j;
            j--;
        }
        t = 2;
        while(t <= i)
        {
        	cout<<t;
            t++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}