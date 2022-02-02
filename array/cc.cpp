#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int test;
    int N, C, rooms; // n -> non inf c-> inf rooms
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> N >> C;
        if (C % 2 == 0 && C != 0)
        {
            int ev = (C / 2) + 1;
            rooms = ev + 1 + N;
        }
        else if (C % 2 != 0 && N % 5 == 0)
        {
            rooms = C + N;
        }
        else if (C % 2 != 0 && N % 5 != 0)
        {
            rooms = C + N - 1;
        }
        else if (C == 1)
        {
            rooms = N + 3;
        }
        else
        {
            rooms = N;
        }
        cout << rooms << endl;
    }
    return 0;
}