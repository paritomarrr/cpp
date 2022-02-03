#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int sum;
    while (i < n)
    {
        if (arr[i] >= 0)
        {
            sum += arr[i];
            i++;
        }
    }
}