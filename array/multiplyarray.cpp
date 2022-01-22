#include <iostream>
using namespace std;
int multiarr(int n, int arr[])
{
    int val;
    for (int i = 0; i < n - 1; i++)
    {
        val = arr[i] * arr[i + 1];
    };

    cout << val;
    return 0;
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    multiarr(n, arr);
    return 0;
}