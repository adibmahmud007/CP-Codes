#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }

        int mx=*max_element(arr.begin(),arr.end());
        int ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==mx)
            {
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
