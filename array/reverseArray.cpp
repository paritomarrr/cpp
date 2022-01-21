#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {
        // for (int i = k - 1; i >= 0; i--)
        // {
        //     cout << arr[i] << " ";
        // };
        // for (int i = n - 1; i >= k; i--)
        // {
        //     cout << arr[i];
        // };

        for (int i = n - 1; i >= 0; i--)
        {
            cout << i;
        }
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr;
        int k;
        cin >> k;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        for (long long i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}