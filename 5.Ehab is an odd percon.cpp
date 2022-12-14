#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];

    }
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if((num[j]+num[j+1])%2!=0)
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }

        }
    }
    for( i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }

    return 0;


}
