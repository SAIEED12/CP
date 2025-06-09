#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,rem=0,count=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=k)
            {
                rem+=a[i];
            }
            else if(a[i]==0&&rem>0)
            {
                count++;
                rem--;

            }

        }
        cout<<count<<endl;
    }
}
