#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cin>>a>>b;

    int v=sum(a,b);
    cout<<"answer="<<v<<endl;
    return 0;
}