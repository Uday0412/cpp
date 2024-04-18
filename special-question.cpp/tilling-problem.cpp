#include<iostream>
using namespace std;

int tillingway(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    return 1;

    return tillingway(n-1)+tillingway(n-2);
}
int main()
{
    cout<<tillingway(4);
    return 0;
}