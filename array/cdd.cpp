#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int ans = (n / 2) + 1;
        cout << ans << endl;
    }
}