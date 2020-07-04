#include<iostream>
using namespace std;

int main()
{
    long n, ans = 0, pow = 1,rev = 0;
    int mod,set=0,count=0;

    cout<<"Enter n: ";
    cin>>n;

    while(n > 0)
    {
        mod = n % 2;
        if(mod == 1)
        {
            set = 1;
        }
        if(mod == 0 && set == 0)
        {
            count++;
        }
        ans = (ans * 10) + mod;
        n = n / 2;
    }

    rev = 0;

    while(ans > 0)
    {
        mod = ans % 10;
        rev = (rev * 10) + mod;
        ans = ans / 10;
    }
    for(int i=1; i<=count; i++)
    {
        pow = pow * 10;
    }
    rev = rev * pow;
    cout<<"Equivalent Binary Number: "<<rev;
    return 0;
}