#include <iostream>
using namespace std;
int main()

{
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i+1]>a[i])
        {
            a[i]=a[i+1];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;

    }

}
