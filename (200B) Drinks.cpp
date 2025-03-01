#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p;
    float result=0;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        result=result+p;
    }
    cout<<result/n;

}
