#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        n++;
        cout<<n/15*3+min(n%15,3)<<endl;
    }
    return 0;
}
