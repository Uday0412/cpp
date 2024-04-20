#include<iostream>
#include<string>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    int lastdigit=0;
    for(int i=0;i<ch;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            lastdigit=0;
            break;
        }
    }
    if(lastdigit==true)
    {
        cout<<"palindrome";
    }
    else
    cout<<"not";
    return 0;

}