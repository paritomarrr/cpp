#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    while (num > 9)
    {
        int tens = num / 10;
        int ones = num % 10;
        num = tens + ones;
    }

    cout << num;
}