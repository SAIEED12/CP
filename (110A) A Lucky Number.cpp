#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int count=0,ln=0;
    char n[100];
    cin>>n;
    ln=strlen(n);
    for(int i=0;i<ln;i++)
    {
        if(n[i]=='4'||n[i]=='7')
        {
            count++;
        }
    }
    if(count==4 || count==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO";
    }
}
