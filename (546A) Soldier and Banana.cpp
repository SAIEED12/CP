#include <iostream>
using namespace std;
int main()
{
    int sum=0,k,n,w;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    if (n>sum)
    {
        cout<<0;
    }
    else
    {
        cout<<sum-n;
    }
}
