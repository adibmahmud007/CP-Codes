#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        n=n-1;
        if(n>0)
        {
            cout<< "Jolly"<<endl;
        }
        else
        {
            cout<< "Not Jolly"<<endl;
        }
    }
    return 0;
}
