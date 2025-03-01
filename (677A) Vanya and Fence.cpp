#include <iostream>
using namespace std;
int main()
{
    int a,n,h,ans=0;
    cin>>n>>h;
    while(n--)
    {
        cin>>a;
        if(a>h)
        {
            ans+=2;
        }
        else
        {
            ans+=1;
        }
    }
    cout<<ans;
}
