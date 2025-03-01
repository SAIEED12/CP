#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set <char> s;
    string st;
    cin>>st;
    for(int i=0;i<n;i++)
    {
        s.insert(tolower(st[i]));
    }
    if(s.size()<26)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
