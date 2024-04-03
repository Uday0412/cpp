#include<iostream>
using namespace std;

int main()
{
    int n,i,product=1;
    cout<<"enter the number";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++)
    {
        product=product*arr[i];
    }
    cout<<product<<endl;
    return 0;
}