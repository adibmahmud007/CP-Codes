#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int adib=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=33 && s[i]<=126)
        {
            if(s[i]=='H' || s[i]== 'Q' || s[i]=='9')
            {
                adib=1;
            }
        }
    }
    if(adib==1)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
    return 0;
}
