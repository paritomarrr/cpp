#include <iostream>
using namespace std;
bool pytha(int num1, int num2, int num3)
{
    int pythagoras = num1 * num1;
    int rhs = (num2 * num2) + (num3 * num3);
    if (pythagoras != rhs)
    {
        return false;
    };
    return true;
};
bool greatest(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        pytha(num1, num2, num3);
    }
    else if (num2 > num1 && num2 > num3)
    {
        pytha(num2, num1, num3);
    }
    else
    {
        pytha(num3, num1, num2);
    }
};
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << greatest(a, b, c) << endl;
    return 0;
}