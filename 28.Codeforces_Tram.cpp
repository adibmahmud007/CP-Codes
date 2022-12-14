#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int capasity=0;
    int stillnow=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        stillnow-=a;
        stillnow+=b;

        capasity=max(capasity,stillnow);
    }
    cout<<capasity<<endl;
}
