#include <iostream>
using namespace std;
int fibo(int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            sum = 0;
            // cout << sum << endl;
        }
        else
        {
            sum = sum + i;
            // cout << sum << endl;
        }
    }
    return sum;
};
int main()
{
    int fibno;
    cin >> fibno;
    cout << fibo(fibno) << endl;
    return 0;
}