#include<iostream>
using namespace std;


int main()
{
    int s,e,w;
    int result;
    
    cin>>s>>e>>w;
    
    while(s <= e)
    {
        result = (s-32) * (5.0/9);
        cout<<s<<"\t"<<result<<endl;
        s = s + w;
    }
    return 0;
}