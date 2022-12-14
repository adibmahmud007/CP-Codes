#include<iostream>
using namespace std;
int main()
{
    int n,h,a,Count=0;
    cin>>n>>h;

    for(int i=0;i<n;i++)
    {
        cin>>a;

    if(a>h)
    {
        Count++;
    }
    Count++;

    }
    cout<<Count<<endl;

}
