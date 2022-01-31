#include <iostream>
using namespace std;
unsigned int factorial(unsigned int num)
{
    unsigned int fact = 1;
    for (unsigned int i = 1; i <= num; i++)
    {
        fact = fact * i;
        // cout << "fact -> " << fact << endl;
    }
    // return fact;
    // if (num == 1)
    // {
    //     cout << 1;
    // };
    return fact;
};
unsigned int permutation(unsigned int num1, unsigned int num2)
{
    unsigned int n = factorial(num1);
    unsigned int r = factorial(num2);
    int s = num1 - num2;
    unsigned int p = factorial(s);
    unsigned int per = n / (r * p);
    int ans = per / 10;
    // cout << "per -> " << per << endl;
    // cout << "ans -> " << ans << endl;
    // if (per < 10)
    // {
    //     cout << per;
    // }
    // else
    // {
    //     cout << ans;
    // }
    // cout << ans;
    // cout << per;
    cout << per;
}
int main()
{
    int r, s;
    cin >> r >> s;
    return permutation(r, s);
    // return 0;
}