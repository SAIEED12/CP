#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    set<char> c;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]>='a' && s1[i]<='z')

            c.insert(s1[i]);
    }
    cout<<c.size();

}


