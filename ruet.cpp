#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define N 100006
 ll  a[N], od[N], evn[N];

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      vector<ll>v, od, evn;

      for(i=0;i<n;i++)
      {
          cin>>a[i];
          if(a[i]%2==1)cnt=1;
          else ans=1;
      }

      if(ans && cnt)asort(a);
      fr(i,n)cout<<a[i]<<" ";


return 0;
}

