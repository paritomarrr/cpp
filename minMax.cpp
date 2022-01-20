#include <iostream>
using namespace std;
void minMax()
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        };
        if (arr[i] < min)
        {
            min = arr[i];
        };
    }
    // cout << "min = " << min << ", max = " << max;
    // return -1;
    cout << min << " " << max << endl;
    // return;
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
    // cout << minMax() << endl;
    return minMax();
}