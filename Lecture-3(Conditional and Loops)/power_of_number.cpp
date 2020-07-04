#include<iostream>
using namespace std;

int main()
{
    int x,n;
    int i=1;
    int ans;
    
    cin>>x>>n;
    
    ans = 1;
    
    while(i <= n)
    {
        ans = ans * x;
        i = i + 1;
    }
    if(n == 0)
    {
        ans = 1;
    }
    cout<<ans;
    return 0;
}