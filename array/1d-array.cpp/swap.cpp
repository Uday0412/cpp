#include<iostream>
using namespace std;

void swap(int x[])
{
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    cout<<"swap="<<x[0]<<x[1]<<endl;
}
int main()
{
    int arr[1];

    for(int i=0;i<=1;i++)
    {
        cin>>arr[i];
    }
    swap(arr);
    return 0;
}