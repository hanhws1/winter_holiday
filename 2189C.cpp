#include<bits/stdc++.h>
using namespace std;
int t,n,a[200001],b[200001],cs[101];
bool tt[200001],ttt[200001],zs;
void dfs(int cs)
{
  //  cout<<cs<<endl;
    if(cs==n)
    {
      for(int i=1;i<=n;i++)
        tt[i]=false;
      tt[n]=true;
      for(int i=n;i>=1;i--)
        if(tt[i])
        {
          for(int j=i-1;j>=1;j--)
            if((a[i]^a[j])==j)
              tt[j]=true;
        }else
        return;
      if(a[n]==1)
      {
        for(int i=1;i<=n;i++)
          cout<<a[i]<<' ';
        cout<<endl;
      }
        
      return;
    }
    for(int i=1;i<=n;i++)
      if(!ttt[i])
      {
        ttt[i]=true;

        a[cs+1]=i;
        dfs(cs+1);
        ttt[i]=false;
      }
}
int main()
{
    cin>>t;
    cs[0]=1;
    for(int i=1;i<=20;i++)
      cs[i]=cs[i-1]*2;
    for(int ii=1;ii<=t;ii++)
    {
        cin>>n;
        zs=false;
        for(int i=1;i<=20;i++)
          if(n==cs[i])
          {
            cout<<-1<<endl;
            zs=true;
            break;
          }
        if(zs)
          continue;
        //dfs(0);
        if(n%2==1)
        {
          a[n]=1;
          for(int i=2;i<n;i++)
            a[i]=i^1;
          a[1]=n-1;
        }else
        {
          int lj=0,n1=n;
          while(n1%2==0)
            n1/=2,lj++;
          a[cs[lj]]=n;
          a[1]=cs[lj]^1;
          a[n]=1;
          for(int i=2;i<n;i++)
            if(i!=cs[lj])
              a[i]=i^1;
        }
        for(int i=1;i<=n;i++)
          cout<<a[i]<<' ';
        cout<<endl;
        /*for(int i=2;i<=n;i++)
          tt[i]=false;
        a[n]=n;
        for(int i=2;i<n;i++)
        {
          a[i]=i^n;
          tt[a[i]]=true;
        }
        for(int i=1;i<=n;i++)
          if(!tt[i])
            a[1]=i;
        for(int i=1;i<=n;i++)
          cout<<a[i]<<' ';
        cout<<endl;*/
    }
    return 0;
}