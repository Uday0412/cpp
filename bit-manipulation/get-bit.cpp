#include<iostream>
using namespace std;

int getbit(int n,int pos)
{
    return ((n&(1<<pos))!=0);
}
int main()
{
    cout<<"get bit="<<getbit(5,2);
    return 0;
}