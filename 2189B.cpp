#include<bits/stdc++.h>
using namespace std;
int t,n;
long long x,a[100001],b[100001],c[100001],d[100001],ans;
int main()
{
    cin>>t;
    for(int ii=1;ii<=t;ii++)
    {
        cin>>n>>x;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
            x-=a[i]*(b[i]-1);
            d[i]=a[i]*b[i]-c[i];
        }
        sort(d+1,d+n+1);
        if(x<=0)
        {
            cout<<0<<endl;
            continue;
        }
        if(d[n]<=0)
        {
            cout<<-1<<endl;
            continue;
        }
        if(x%d[n]==0)
          cout<<x/d[n]<<endl;else
          cout<<x/d[n]+1<<endl;
    }
    return 0;
}