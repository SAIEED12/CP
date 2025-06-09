#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        bool b=false;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
            if(a%3==1)
            {
                b=true;
            }
        }

        if(sum%3==0)
        {
           cout<<0<<endl;
        }
        else if(sum%3==2)
        {
            cout<<1<<endl;
        }
        else
        {
            if(b==true)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }

    }
}

