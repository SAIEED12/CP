#include <iostream>
using namespace std;

int main()
{
    int n,x=0,len;
    string s;
    cin>>n;
    if(n<1 || n>150)
    {
        exit(0);
    }
    cin.ignore();
    while(n--)
    {
        getline(cin, s);
        len=s.length();
        if(len>3 || len<3)
        {
            exit(0);
        }
        for(char ch:s)
        {
            if(ch=='X' || ch=='+' || ch=='-')
            {
                continue;
            }
            else
            {
                exit(0);
            }
        }
        if(s=="X++" || s=="++X")
        {
            x++;
        }
        else if(s=="X--" || s=="--X")
        {
            x--;
        }

    }
    cout<<x<<endl;
    return 0;

}
