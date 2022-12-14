#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch;
    int Count =0;
    while (cin>>ch)==1)
    {
        if (ch=='"')
            {
                Count++;
                if(Count%2)
                {
                    cout<< "``";
                }
                else
                {
                    cout<< "''";
                }
            }
            else
            {
                cout<<ch;
            }
    }
    return 0;
}
