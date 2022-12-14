#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll a,b,c,k;
        cin>>a>>b>>c>>k;
        ll sum=(a+b+c)-k;
        if(sum%3==0)
        {
            cout<< "Case "<<i+1<< ": Peaceful"<<endl;
        }
        else
        {
            cout<< "Case "<<i+1<< ": Fight"<<endl;
        }

    }
    return 0;
}
