#include <iostream>
using namespace std;
int main()
{
   int A[5][5],x,y;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           cin>>A[i][j];
           if(A[i][j]==1)
           {
               x=i+1;//index starts at 0 so converting the row index to 1
               y=j+1;//index starts at 0 so converting the column index to 1
           }
       }

   }
   cout<<abs(x-3)+abs(y-3)<<endl;


}

