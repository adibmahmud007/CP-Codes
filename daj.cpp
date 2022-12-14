#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size=7,i;
    cout<< "Enter array size:"<<endl;
    cin>>size;
    char letter[size],org[]={"Organization"},hello[]={'h','e','l','l','o' };
    cout<< "Array elements:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>letter[i];
    }
    cout<< "Given array is: "<<endl;
    for(i=0;i<size;i++)
    {
        cout<<letter[i];
    }
    cout<<endl;
    cout<< "size of letter "<<sizeof(letter)<<endl;
    cout<< "size of org "<<sizeof(org)<<endl;
    return 0;
}
