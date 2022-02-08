#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    int val = INT16_MIN;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << i;
            val = i;
        }
    }

    if (val == INT16_MIN)
    {
        int i = 0;
        while (arr[i] < target)
        {
            i++;
        }
        cout << i;
    }
}