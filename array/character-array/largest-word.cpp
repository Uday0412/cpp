#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.getline();

    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currlen=0;maxlen=0;
    while(1)
    {
        if(arr[i]=' ' && arr[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=curlen;
            }
            currlen=0;
        }
        else
        {
            currelen++;
        }
    }
}