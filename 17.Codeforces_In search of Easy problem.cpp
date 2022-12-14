#include<iostream>
using namespace std;
int main()
{
    int n,Count=0;
    cin>>n;
    int t[n];
    for(int i=0;i<n;i++)
    {

        cin>>t[i];
        if(t[i]==1)
        {
            Count++;
        }

    }
        if(Count>0)
        {
            cout<< "HARD"<<endl;

        }
        else
        {
            cout<<"EASY"<<endl;

        }

    return 0;
}
