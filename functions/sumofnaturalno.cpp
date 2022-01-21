#include <iostream>
using namespace std;
int natNo(int val)
{
    int sum = (val * (val + 1)) / 2;
    return sum;
};
int main()
{
    int num;
    cin >> num;
    cout << natNo(num) << endl;
    return 0;
}