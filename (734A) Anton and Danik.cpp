#include <iostream>
using namespace std;
int main()
{
    int n,countA=0,countD=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            countA++;
        }
        else
        {
            countD++;
        }
    }
    if(countA>countD)
    {
        cout<<"Anton"<<endl;
    }
    else if(countA<countD)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
}
