#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,st=0,en=0;
        cin>>n>>x;
        for(int i=1;i<=n;i++)
        {
            int h;
            cin>>h;
            if(st==0&&h==1)
            {
                st=i;
            }
            else if(h==1)
            {
                en=i;
            }
        }
        if(x>=(en-st+1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
