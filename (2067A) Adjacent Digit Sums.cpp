#include <iostream>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x+1==y)
        {
            cout<<"YES"<<endl;
        }
        else if(x>y && (x-y+1)%9==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
