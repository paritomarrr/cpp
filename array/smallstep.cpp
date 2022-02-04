#include <iostream>
using namespace std;
int main()
{
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int v = arr[0];
    int steps = 1;
    // 1 3 5 8 9 2 6 7 6 8 9
    while (v <= n)
    {
        int val = arr[v];

        // steps++;
        // cout << " steps -> " << steps << endl;
        if (v == 0)
            break;
        v += val;
        // cout << " v -> " << v;
        steps++;
    }
    cout << steps;
}