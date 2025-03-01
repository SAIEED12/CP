#include <iostream>
using namespace std;
int main()
{
    int n,k,scr[100],cutscr,Count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>scr[i];
    }
    cutscr=scr[k-1];
    for(int i=0;i<n;i++)
    {
        if(scr[i]>=cutscr && scr[i]>0)
        {
            Count++;
        }
    }


    cout<<Count<<endl;

}
