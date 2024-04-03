#incude < iostream>
using namespace std;
int main()
{
    int r1, c1;
    cin >> r1 >> c1;
    int arr1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[n][m];
        }
    }
    int r2, c2;
    cin >> r2 >> c2;
    int arr2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    if (c1 != r2)
    {
        cout << "not work matrix";
    }
    else
    {
        int c[r1][c2];
        for (int i = 0; < r1; i++)
        {
            for (int i = 0; j < c2; j++)
            {
                for (int k = 0; k < r2; k++)
                {
                    int value += a[i][k] * b[k][j];
                }
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}