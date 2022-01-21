#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            sum = 0;
            cout << sum << endl;
        }
        else
        {
            int sum = sum + i;
            cout << sum << endl;
        }
    }

    return sum;
}