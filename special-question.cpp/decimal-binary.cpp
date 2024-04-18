#include<iostream>
using namespace std;

int deciamltobinary(int n)
{
    int x=1;
    int ans=0;
    while(x<=n)
    x*=2;
    x/=2;
    while(x>0)
    {
        int latdigit=n/x;
        n-=lastdigit*x;
        x/=2;
        ans=ans*10+lastdigit;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<deciamltobinary(n)<<endl;
    return 0;
}