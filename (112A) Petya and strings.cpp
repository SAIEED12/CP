#include <iostream>
#include <string>
#include <cstring> //For strcmp to compare C-style strings.
#include <algorithm> //For the transform function.
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower); //The third argument (s1.begin()) is the start of the destination range, i.e., the place where the transformed characters will be written.
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout<<strcmp(s1.c_str(),s2.c_str())<<endl; //s1.c_str(): Converts the C++ std::string to a C-style string (a null-terminated character array).
    return 0;

}
