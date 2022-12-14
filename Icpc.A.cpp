#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  n,x,d,z;
    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }
        x=n/10;
        d=n%10;
        z=(5*d)-x;
        if(z%17==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
