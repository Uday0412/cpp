#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int t1=0;
    int t2=1;
    int nextteram;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        nextteram=t1+t2;
        t1=t2;
        t2=nextteram;
    }
    cout<<nextteram<<endl;
    return 0;

}