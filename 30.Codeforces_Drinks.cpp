#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[110];
    double ans=0.0,sum=0.0;
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
        sum+=a[i];

    }
    ans=sum/n;

    cout<<fixed<<setprecision(12)<<ans<<endl;

    return 0;

}
