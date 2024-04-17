#include<iostream>
using namespace std;

void f(int *arr,int idx,int n)
{
    if(idx==n)
    return;
    cout<<"element="<<arr[idx]<<endl;
    f(arr,idx+1,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(arr,0,n);
    return 0;
}