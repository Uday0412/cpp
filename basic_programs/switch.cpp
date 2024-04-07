#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"enter the character";
    cin>>button;

    switch(button)
    {
        case 'a':
        cout<<"hellow"<<endl;
        break;
        case 'b':
        cout<<"hola"<<endl;
        break;
        default:
        cout<<"loda ";
        break;
    }   
    return 0;                          
}