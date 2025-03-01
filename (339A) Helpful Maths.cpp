#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>v;
    string s;
    int n;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
          n=s[i]-'0';//converting ASCII values to integer
          v.push_back(n);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        if(i<v.size()-1)
        {
            cout<<"+";
        }
    }

    return 0;

}
