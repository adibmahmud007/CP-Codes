#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int go=x/5;
    if(x%5 >0)
    {
        go++;
    }
    cout<<go<<endl;
    return 0;

}
