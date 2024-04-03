#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter the array";
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int x;
    cin>>x;
    bool flag=false;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"element found";0
                flag=true;
            }
        }
    }
    
    if(flag)
    {
        cout<<"element found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}