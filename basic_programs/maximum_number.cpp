#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greater than b and c";
        }
        else{
            cout<<"c is greater";
        }
    }
    else
    {
        if(b>a)
        {
            if(b>c)
            {
                cout<<"b is greter than a and c ";
            }
        }
        else
        {
            cout<<"c is greater";
        }
    }
    return 0;
}