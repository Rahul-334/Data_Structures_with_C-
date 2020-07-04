#include<iostream>
using namespace std;


int main()
{
    int n;
    int i=1,j=1,sp=1,temp=1;
    
    cout<<"Enter n: ";
    cin>>n;
    
    while(i <= n)
    {
        sp = 1;
        while(sp <= (n-i))
        {
            cout<<" ";
            sp = sp + 1;
        }
        j = 1;
        while(j <= temp)
        {
            cout<<"*";
            j = j + 1;
        }
        i = i + 1;
        temp = temp + 2;
        cout<<endl;
    }
    return 0;
}


