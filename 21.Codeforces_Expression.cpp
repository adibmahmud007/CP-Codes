#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,r1,r2,r3,r4,r5;
    cin>>a>>b>>c;

    r1=a+b*c;
    r2=a*(b+c);
    r3=a*b*c;
    r4=(a+b)*c;
    r5=a+b+c;

    int arr[5]={r1,r2,r3,r4,r5};
    sort(arr,arr+5);
    cout<<arr[4];

    return 0;
}
