#include<iostream>
using namespace std;
int main()
{
    int t,p,q,Count=0;
    cin>>t;
    while(t--)
    {
        cin>>p>>q;

        if(q-p>=2)
        {
            Count++;
        }

    }
    cout<<Count<<endl;


    return 0;
}
