#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
        }
        int total=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                total+=count-1;
            }
            else{
                total+=count+1;
            }
        }
        cout<<total<<endl;
    }
}
