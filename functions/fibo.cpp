#include <iostream>
using namespace std;
int fibo(int num)
{
    // int sum = 0;
    // for (int i = 0; i < num; i++)
    // {
    //     if (i == 0)
    //     {
    //         sum = 0;
    //         // cout << sum << endl;
    //     }
    //     else
    //     {
    //         sum = sum + i;
    //         // cout << sum << endl;
    //     }
    // }
    // return sum;
    int t1 = 0;
    int t2 = 0;
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        cout << t1 << endl;
        t2++;

        t1 = t1 + t2;
        // t2++;
    }
    return sum;
};
int main()
{
    int fibno;
    cin >> fibno;
    // cout << fibo(fibno) << endl;
    fibo(fibno);
    return 0;
}