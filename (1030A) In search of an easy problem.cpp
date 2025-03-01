#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a[100];
        cin>>a[i];
        if(a[i]==1)
        {
            count++;
        }
    }
    if(count<1)
    {
        cout<<"Easy";
    }
    else
    {
        cout<<"Hard";
    }
    return 0;

}
