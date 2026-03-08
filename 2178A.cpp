#include<bits/stdc++.h>
using namespace std;
int t,n,l,r,mid;
bool tt,tc[200005];
struct dd
{
  int id,s;
}a[200005];
bool check(int x)
{
  if(a[n].s-a[1].s<x)   
    return false;
  for(int i=1;i<=n;i++)
    tc[i]=false;
  for(int i=2;i<=n;i++)
    if(a[i].s-a[1].s>=x)
      tc[i]=true;
  for(int i=1;i<n;i++)
    if(a[n].s-a[i].s>=x)
      tc[i]=true;
  for(int i=1;i<=n;i++)
    if(tc[i]!=tc[a[i].id]||!tc[i]&&i!=a[i].id)
      return false;
    return true;
}
bool cmp(dd x,dd y)
{
  if(x.s<y.s||x.s==y.s&&x.id<y.id)
    return true;
  return false;
}
int main()
{
    cin>>t;
    for(int ii=1;ii<=t;ii++)
    {
        cin>>n;
      //  cout<<'!'<<endl;
        tt=false;
        for(int i=1;i<=n;i++)
          cin>>a[i].s,a[i].id=i,tc[i]=false;
        for(int i=1;i<n;i++)
          if(a[i].s>a[i+1].s)
            tt=true;
            //cout<<'!'<<endl;
        if(!tt||n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(a+1,a+n+1,cmp);
        l=0,r=1000000000;
        mid=(l+r)/2;
        while(l<r)
        {
            if(check(mid))
              l=mid+1;else
              r=mid;
            mid=(l+r)/2;
           // cout<<l<<" "<<r<<" "<<mid<<endl;
        }
        cout<<r-1<<endl;
    }
    return 0;
}