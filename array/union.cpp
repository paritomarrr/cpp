#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[6] = {2, 6, 38, 4, 5, 8};
    int otp = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr1[i] == arr2[j])
            {
                otp++;
            }
        }
    }
    int rule;
    int a1 = arr1.size() - otp;
    int a2 = arr2.size() - otp;
    otp = otp + a1 + a2;
    cout << otp << endl;
}