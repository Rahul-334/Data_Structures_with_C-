#include<iostream>
using namespace std;

int main()
{
    long n,t,prev;
    long c = 0;
    
    bool inc = false, dec = false, ans = false;
        
    cout<<"Enter n: ";
    cin>>n;
    
    while(c != n)
    {
        if(c == 0)
        {
            cin>>t;
            prev = t;
        }
        else
        {
            cin>>t;
            if(prev < t)
            {
                inc = true;
            }
            else if(prev > t && inc == false)
            {
                dec = true;
            }
            else if(prev > t && inc == true)
            {
                ans = true;
                break;
            }
        }
        c++;
        prev = t;
    }
    if(ans == true)
    {
        cout<<"false";
    }
    else if(inc == true || dec == true)
    {
        cout<<"true";
    }
    return 0;
}