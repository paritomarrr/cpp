#include <iostream>
using namespace std;
int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10; // 1
        ans += x * y;   // 0 + 1*1 = 1
        x *= 2;         // 1*1 = 1
        n /= 10;
    }
    return ans;
};
int main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n) << endl;
    return 0;
}