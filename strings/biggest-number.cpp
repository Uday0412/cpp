#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s="648936458";
    short(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}