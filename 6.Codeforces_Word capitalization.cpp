#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
    s[0]=towlower(s[0]);
    cout<<s<<endl;
    }
    return 0;
}
