#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],Totalsum=0,sum1=0,Count=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
           Totalsum= Totalsum+a[i];
    }
    int half = Totalsum/2;

    sort(a,a+n);
    for(int i=n-1; i>=0; i--)
    {
        sum1+=a[i];
        Count++;

        if(sum1>half)
        {
            break;
        }
    }
    cout<<Count;
    return 0;
}
