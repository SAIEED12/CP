#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;

    for(int i=0; i<2; i++)
    {
        int p;
        cin>>p;
        for(int j=0; j<p; j++)
        {
            int q;
            cin>>q;
            s.insert(q);
        }
    }

    if(s.size()==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
    return 0;

}
