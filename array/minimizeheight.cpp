#include <iostream>
#include <algorithm>
using namespace std;
int minHeight(int arr[], int k, int n)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;
    int mi, ma;

    for (int i = 0; i < n; i++)
    {
        mi = min(smallest, arr[i + 1] - k);
        ma = max(largest, arr[i + 1] + k);
        if (mi < 0)
            continue;
        ans = min(ans, (ma - mi));
    }
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Minimum height btw towers is -> " << endl;
    cout << minHeight(arr, k, n);
    return 0;
}