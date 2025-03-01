#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=1;
        cin>>n;
        int b[n-2];
        for(int i=0;i<n-2;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n-3;i++)
        {
            if(b[i]==1 && b[i+1]==0 && b[i+2]==1)
            {
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
    }
}
