#include<bits/stdc++.h>
using namespace std;
int t,n,h,l,a[101],to[1001],sum1,sum2;
int main()
{
    cin>>t;
    for(int ii=1;ii<=t;ii++)
    {
        cin>>n>>h>>l;
        sum1=sum2=0;
        for(int i=1;i<=1000;i++)
          to[i]=0;
        for(int i=1;i<=n;i++) 
        {
            cin>>a[i];
            to[a[i]]++;
        }
        if(h>l)swap(h,l);
        for(int i=1;i<=h;i++)
          sum1+=to[i];
        if(h==l)
          cout<<sum1/2<<endl;else
          {
            for(int i=h+1;i<=l;i++)
              sum2+=to[i];
            if(sum2>sum1)
              cout<<sum1<<endl;else
              cout<<sum2+(sum1-sum2)/2<<endl;
          }
    }
    return 0;
}