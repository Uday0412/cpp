#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int reversed=0;
    while(n>0)
    {
        int lastdigit=n%10;
        reversed=(reversed*10)+lastdigit;
        n=n/10;
    }
    cout<<"revered is= "<<reversed<<endl;
    return 0;
}