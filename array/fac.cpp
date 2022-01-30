#include <iostream>
using namespace std;
double factorial(double num)
{
    double fact = 1;
    for (double i = 1; i <= num; i++)
    {
        fact = fact * i;
        cout << "fact -> " << fact << endl;
    }
    // return fact;
    if (num == 1)
    {
        cout << 1;
    };
    return fact;
};
// double permutation(double num1, double num2)
// {
//     double per = factorial(num1) / (factorial(num2) * factorial(num1 - num2));
//     cout << per;
// }
int main()
{
    int r, s;
    cin >> r;
    cout << factorial(r);
    return 0;
}