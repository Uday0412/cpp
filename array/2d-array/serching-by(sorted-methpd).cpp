#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;

    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    int r=0;c=m-1;

    while(r<n && c>=0)
    {
        if(mat[r][c]==target)
        {
            found=true;
        }
        else if(mat[r][c]>target)
        {
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"element found";
    }
    else{
        cout<<"not found";
    }

    return 0;
}