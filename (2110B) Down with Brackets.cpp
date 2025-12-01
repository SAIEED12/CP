#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sum=0,ct=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                sum++;
            }
            else
            {
                sum--;
            }
            if(sum==0)
            {
                ct++;
            }
        }
        if(ct>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
