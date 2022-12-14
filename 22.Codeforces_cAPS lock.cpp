#include<bits/stdc++.h>
using namespace std;


int main()
{

    string str;
    getline(cin,str);
    bool OK = true;

    for(int i = 1; i < str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            OK = false;
            break;
        }
    }
    if(OK)
    {
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')str[i]+=32;
            else str[i]-=32;
        }
    }
    cout << str << endl;
    return 0;
}
