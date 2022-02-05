#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int n = nums.size();
    int as = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                as = nums[i];
                break;
            };
        }
    }
    cout << as;
};
int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << findDuplicate(nums);
}