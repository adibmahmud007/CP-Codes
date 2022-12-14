#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a,b;
        ll maxim=0;
        ll m=0;
        for (ll i = 0; i < n-1; ++i)
        {
            cin>>a>>b;
            ll x=a-b;
            m=m+x;
            maxim=max(maxim,m);

        }
        for(int i=0; i<2; i++)
        {
            cout<<"Case "<<i+1<<": "<<maxim<<endl;
        }

    }

    return 0;
}
