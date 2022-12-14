#include<bits/stdc++.h>
using namespace std;

    string s,b="hello";
    int c=0,j=0;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==b[j])
        {
            j++;
            c++;
        }
        if(c==5)
        {
            break;
        }
    }
    if(c==5)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
    return 0;
}
