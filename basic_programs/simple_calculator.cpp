#include<iostream>
using namespace std;

int main()
{
    int i,n,n1,n2;
    int sum=0;
    for(i=0;i<n;i++)
    {
        cin>>n;
    }

    char op;                                                                                                                                                                                                    
    cout<<"enter the operator";
    cin>>op;

    switch(op)
    {
        case '+':
        for(i=0;i<n;i++)
        {
            sum=sum+n;
            break;
        }
        cout<<sum;
        case '-':
        cout<<n1-n2<<endl;
        break;
        case '*':
        cout<<n1*n2<<endl;
        break;
        case '/':
        cout<<n1/n2<<endl;
        break;
        case '%':
        cout<<n1%n2<<endl;
        break;
        default:
        cout<<"glat sign"<<endl;
        break;
    }
    return 0;
}