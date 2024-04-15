#include <iostream>
using namespace std;

int updatebit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;

    return (n | (value << pos));
}

int main()
{
    cout << "update bit=" << updatebit(5, 2);
    return 0;
}