#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, arr[100];
    cin >> k >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] - k <= 0)
        {
            arr[i] += k;
        }
        else
        {
            arr[i] -= k;
        }
    }
    if (arr[0] + k < arr[n - 1])
        arr[n - 1] -= k;
    else
        arr[n - 1] += k;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    int ans = arr[n - 1] - arr[0];
    cout << ans;
}