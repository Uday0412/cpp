#include<iostream>
using namespace std;

int setbit(int n,int pos)
{
    return (n|1<<pos);
}
int main()
{
    cout<<"set bit="<<setbit(5,2);
    return 0;
}