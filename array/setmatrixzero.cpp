#include <iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int newArr[10][10];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                newArr[i][j] = 0;
                int p = 0;
                while (p < row)
                {
                    newArr[i][p] = 0;
                    newArr[p][j] = 0;
                }
            }
            else
            {
                newArr[i][j] = 1;
            }
        }
    }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (arr[i][j] == 0)
    //         {
    //             for (int z = 0; z < row; z++)
    //             {
    //                 arr[z][j] = 0;
    //                              }
    //             for (int g = 0; g < col; g++)
    //             {
    //                 arr[i][g] = 0;
    //             }
    //         }
    //     }
    // }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }
}