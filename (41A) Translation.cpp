#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    if(s==t)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
