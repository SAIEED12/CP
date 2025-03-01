#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int arr[125]={0}; //For avoiding garbage value and misbehave
    //size of array is 125 because ASCII value of lowercase letters start from 97(a) and ends in 122(z)
    int count=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        arr[s[i]]++;
        if(arr[s[i]]==1) //If arr[s[i]] equals 1, the character is encountered for the first time, so the count of distinct characters is incremented.
        {
            count++;
        }


    }
     if(count%2==0)
        {
            cout<<"CHAT WITH HER!"<<endl;
        }
        else
        {
            cout<<"IGNORE HIM!"<<endl;

        }

        return 0;
}
