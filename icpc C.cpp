#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long ts;
        ts=(a-b);
        long long us=ts*c;
        cout<<us<<endl;
    }
    return 0;
}
