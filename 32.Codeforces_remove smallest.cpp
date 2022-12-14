#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;

    string con=a+b;
    sort(con.begin(),con.end());
    sort(c.begin(),c.end());

    if(con==c)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
    return 0;
}
