#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,n,mx,mn,x;
        mn=0;
        mx=0;
        cin>>n>>a;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            if(x<a)
            {
                mn++;
            }
            if(x>a)
            {
                mx++;
            }
        }
        if(mn>mx)
        {
                cout<<a-1<<endl;
        }
        else
        {
                cout<<a+1<<endl;
        }
    }
}
