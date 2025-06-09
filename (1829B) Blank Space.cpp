#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0,s=0;
    cin>>t;
    while(t--)
    {
        int t,n,count=0,s=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==0)
            {
                count++;
            }
            else
            {
                count=0;
            }
            s=max(s,count);
        }
        cout<<s<<endl;
    }
}
