#include <iostream>
using namespace std;
int main()
{
    int rupees, chocolaes, wrappers, moreChoco, extra = 0;
    cin >> rupees;
    chocolaes = wrappers = rupees;
    while (wrappers > 3)
    {
        if (wrappers % 3 == 0)
        {
            moreChoco = wrappers / 3;
            extra = extra + moreChoco;
            wrappers = moreChoco;
        }
        if (wrappers % 3 == 2)
        {
            moreChoco = wrappers / 3;
            extra = extra + moreChoco + 1;
            wrappers = moreChoco;
        }
    }
    int final = chocolaes + extra;
    cout << final;

    return 0;
}