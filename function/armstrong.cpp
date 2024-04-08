#include<iostream>
#include<math.h>
using namespace std;

int armstrong(int n)
{
    int sum=0;
    int orignaln=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(sum == orignaln)
    
        cout<<"armstrong number"<<endl;
    
    else
    
        cout<<"not a number"<<endl;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<armstrong(n)<<endl;
    return 0;
}