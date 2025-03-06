#include <iostream>
using namespace std;
int main()
{
    int n,a[30],b[30],x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++) //guest team
    {
        for(int j=0;j<n;j++) //host team
        {
            if(b[i]==a[j]) //if guest uniform matches host uniform
            {
                x++;
            }
        }
    }
    cout<<x<<endl;
}
