#include<iostream>
using namespace std;
#include <climits>


int main()
{
    int n,c=0,t,store,check=1;
    int max = INT_MIN;
    
    int min_cons = INT_MIN;
    
    cin>>n;
    
    int A[n];
    //int pos = 0;
    //int trace = 0;
    int z = 0;
    
    if(n == 0)
    {
        cout<<min_cons;
    }
    else if(n == 1)
    {
        cin>>t;
        cout<<min_cons;
    }
    else
    {
        while(c != n)
        {
            if(c == 0)
            {
                cin>>t;
                A[z++] = t;
                store = t;
                c++;
            }
            else
            {
                cin>>t;
                A[z++] = t;
                if(store == t)
                {
                    check++;
                }
                c++;
            }
        }
        if(check == n)
        {
            cout<<min_cons;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(A[i] > max)
                {
                    max = A[i];
                    //pos = i;
                }
            }
            for(int i=0; i<n; i++)
            {
                if(A[i] == max)
                {
                    A[i] = INT_MIN;
                }
            }
            //A[pos] = INT_MIN;
            max = INT_MIN;
            for(int i=0; i<n; i++)
            {
                if(A[i] > max)
                {
                    max = A[i];
                }
            }
            cout<<max;
        }
    }
    return 0;
}