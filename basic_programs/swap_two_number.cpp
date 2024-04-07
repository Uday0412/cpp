#include<iostream>
using namespace std;

int main()
{
    int a=12;
    int b=13;
    int temp;

   temp=a;
   a=b;
   b=temp;
     
   cout<<"a="<<a<<"\n""b="<<b;
    return 0;
}