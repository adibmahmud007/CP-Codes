#include<iostream>
using namespace std;
int main()
{
    string s;
    int n,Count=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            Count++;
        }
    }
    cout<<Count<<endl;
    return 0;

}
