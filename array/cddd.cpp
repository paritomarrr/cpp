#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        int fraud;
        int total;
        if (a < b && a < c)
        {
            fraud = p;
            total = p + b + c;
        }
        else if (b < a && b < c)
        {
            fraud = q;
            total = fraud + a + c;
        }
        else
        {
            fraud = r;
            total = fraud + a + b;
        }
        cout << "TOTAL " << total << endl;
        int sumof = total / 2;
        int sum = (p + q + r) / 2;
        cout << "SUM " << sum << endl;
        if (sumof < 1 sum)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}