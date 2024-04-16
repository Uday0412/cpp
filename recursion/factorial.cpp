#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    return 1;

    int prevfactorial=fact(n-1);
    return n*prevfactorial;
}
int main()
{
    int n;
    cin>>n;

    cout<<"factorial="<<fact(n)<<endl;
    return 0;
}