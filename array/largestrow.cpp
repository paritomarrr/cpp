#include <iostream>
using namespace std;
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

    cout << " Ye rhi array aur uska row-wise sum " << endl;
    // int sum = 0;
    int largest = 0;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        // int largest=0;

        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << " sum -> " << sum << endl;
        // sum = 0;
        if (sum > largest)
        {
            largest = sum;
        };
    }
    cout << " so the winner is -> " << largest;
    return 0;
}