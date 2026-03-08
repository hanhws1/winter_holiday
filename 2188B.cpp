#include<bits/stdc++.h>
using namespace std;
int t,n,ans;
char ch[200001];
int main()
{
    cin>>t;
    for(int ii=1;ii<=t;ii++)
    {
        cin>>n;
        ans=0;
        for(int i=1;i<=n;i++)
          cin>>ch[i];
        ch[n+1]='0';
        if(n==1)
        {
          cout<<1<<endl;
          continue;
        }
        for(int i=1;i<=n;i++)
          if(ch[i]=='0')
          {
            if(ch[i-1]=='1')
              continue;
            if(i==1&&ch[i+1]=='0')
              ch[i+1]='1';else
              if(i==n&&ch[i-1]=='0')
                ch[i]='1',ans++;else
                if(ch[i-1]=='0'&&ch[i-2]=='0')
                  ch[i]='1',ans++;
          }else
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}