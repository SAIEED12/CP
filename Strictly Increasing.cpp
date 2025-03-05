#include <iostream>
using namespace std;
int main()
{
    int n,count;
    int A[1000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(A[i]<A[i+1])
        {
            count=0;
        }
        else if(A[i]>=A[i+1])
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
