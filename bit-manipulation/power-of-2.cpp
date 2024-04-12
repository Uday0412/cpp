#include<iostream>
using namespace std;

bool ispower(int n)
{
    return (n&&!(n&n-1));
}
int main()
{
    cout<<ispower(16)<<endl;
    return 0;
}