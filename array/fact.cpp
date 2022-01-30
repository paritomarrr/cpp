#include <iostream>
using namespace std;
double factorial(int num)
{
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact = fact * i;
    }
    // return fact;
    if (num == 1)
    {
        cout << 1;
    };
    return fact;
};
double permutation(int num1, int num2)
{
    int per = factorial(num1) / (factorial(num2) * factorial(num1 - num2));
    cout << per;
}
int main()
{
    int r, s;
    cin >> r >> s;
    permutation(r, s);
    return 0;
}