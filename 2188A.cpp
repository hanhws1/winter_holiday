#include<bits/stdc++.h>
using namespace std;
int t,n,qd,js;
int main()
{
    cin>>t;
    for(int ii=1;ii<=t;ii++)
    {
        cin>>n;
        qd=n/2+n%2;
        js=0;
        for(int i=1;i<=n;i++)
        {
            cout<<qd<<' ';
            if(js<=0)
              js=-js+1;else
              js=-js-1;
            qd+=js;
        }
        cout<<endl;
    }
    return 0;
}