#include <Iostream>
using namespace std;

int main()
{
    int n,pet,vas,ton, number=0,r;
    cin>>n;
    while(n--)
    {
        cin>>pet>>vas>>ton;
        r=pet+vas+ton;
        if(r>=2)
        {
            number+=1;
        }

    }
      cout<<number<<endl;

    return 0;
}
