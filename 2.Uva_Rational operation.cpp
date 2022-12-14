#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int num1,num2;
        while(cin>>num1>>num2)
        {
            if(num1>num2)
            {
                cout<< ">"<<endl;
            }
            else if(num1<num2)
            {
                cout<< "<"<<endl;
            }
            else if(num1==num2)
            {
                cout<< "="<<endl;
            }
        }
    }
    return 0;

}
