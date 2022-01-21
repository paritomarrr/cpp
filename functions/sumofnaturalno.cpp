#include <iostream>
using namespace std;
int natNo(int val)
{
    int sum = 0;
    for (int i = 1; i < val; i++)
    {
        sum = sum + i;
        cout << sum << endl;
    }
    return sum;
};
int main()
{
    int num;
    cin >> num;
    cout << natNo(num) << endl;
    return 0;
}