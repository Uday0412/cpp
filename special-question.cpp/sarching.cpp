#include<iostream>
using namespace std;

int linearspace(int arr[],int n,int key)
{
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearspace(arr,n,key)<<endl;
    return 0;
}