#include<iostream>
using namespace std;

int main()
{
    char arr[100];
    cin>>arr;

    bool check=1;
    int n;
    for(int i=0;i<'\0';i++)
    {
        if(arr[i]!=arr(n-1-i))
        {
            check=0;
            break;
        }
    }
    if(check==true)
    {
        cout<<"word is palinrome"<<endl;
    }
    else
    {
        cout<<"not"<<endl;
    }
    return 0;
}