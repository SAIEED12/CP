#include <iostream>
#include <set>
using namespace std;
int main()
{
    set <int> h;
    int s;
    for(int i=0;i<4;i++)
    {
        cin>>s;
        h.insert(s);
    }
    cout<<4-h.size();
}
