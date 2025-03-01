#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    int countup=0,countlow=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            countup++;
        }
        else
        {
            countlow++;
        }
    }
    if(countup>countlow)
    {
        char ch;
        for(int i=0;i<s.size();i++)
        {
            ch=toupper(s[i]);
            cout<<ch;
        }
    }
    else
    {
        char ch;
        for(int i=0;i<s.size();i++)
        {
            ch=tolower(s[i]);
            cout<<ch;
        }

    }
    return 0;
}
