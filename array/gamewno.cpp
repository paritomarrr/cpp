#include <iostream>
using namespace std;
int *game_with_number(int arr[], int n)
{

    // Complete the function
    for (int i = 0; i < n; i++)
    {

        arr[i] = arr[i] | arr[i + 1];
        cout << arr[i] << " ";
    };
    return arr;
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    // cout << game_with_number(arr, n) << endl;
    game_with_number(arr, n);
}