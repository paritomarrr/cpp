#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[5] = {3, 6, 8, 4, 2};
    // function
    int first = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = first;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}