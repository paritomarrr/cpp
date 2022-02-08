#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nums[100];
    int n;
    vector<int> arr;
    cin >> n;
    int target;
    cin >> target;
    int i = 0;
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    //  int i = 0;
    //         int j= 1;
    cout << "starting" << endl;
    // while (i < n)
    // {
    //     // cout << arr[0] << " " << arr[1];
    //     cout << "i -> " << i << endl;

    //     while (j <= n)
    //     {
    //         cout << "j -> " << j << endl;

    //         if (nums[i] + nums[j] == target)
    //         {
    //             arr.push_back(i);
    //             arr.push_back(j);
    //         }
    //         j++;
    //         // cout << "j -> " << j << endl;
    //     }
    //     i++;
    //     // cout << "i -> " << i << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                arr.push_back(i);
                arr.push_back(j);
            }
        }
    }
    cout << arr[0] << " " << arr[1];
    cout << "Terminated";
    // cout << arr[0] << " " << arr[1];
}