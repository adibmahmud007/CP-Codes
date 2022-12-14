#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int len=strlen(s);
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(s[j]!= '+')
            {
                if(s[j]>s[j+2])
                {
                    char temp;
                    temp=s[j];
                    s[j]=s[j+2];
                    s[j+2]=temp;

                }
            }
        }
    }
    cout<<s;

}
