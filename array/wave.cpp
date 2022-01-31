#include <iostream>
using namespace std;
// int rev(int arr[3][3])
// {
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 2; j >= 0; j--)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// ;
int main()
{
    int arr[3][3];
    cout << "array enter krdo bhai " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // cout << " Ye rhi array aur uska row-wise sum " << endl;
    for (int j = 0; j < 3; j++)
    {
        if (j & 1)
        {
            //odd bottom to top
            for (int i = 2; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            // even top to bottom
            for (int i = 0; i < 3; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout <<
    }
    return 0;
}