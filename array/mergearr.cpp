#include <iostream>
#include <algorithm>
// #include <vector>
using namespace std;
int main()
{
    int arr1[500];
    int arr2[500];
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int arr3[100];
    int i = 0;
    while (i < n)
    {
        arr3[i] = arr1[i];
        i++;
    }
    int j = n;
    i = 0;
    while (j < n + m)
    {

        arr3[j] = arr2[i];
        i++;
        j++;
    }

    sort(arr3, arr3 + n + m);
    for (int i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}