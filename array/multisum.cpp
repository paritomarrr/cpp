#include <iostream>
using namespace std;

int sum(int s, int e)
{
    int size;
    int arr[size];
    int add = 0;
    for (int i = s; i < e - 1; i++)
    {
        add = arr[i] + arr[i + 1];
    }
    cout << add;
    return 0;
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    int x = sum(0, n / 2);
    int y = sum((n / 2) + 1, n);
    cout << "Multiply " << x * y;
    return 0;
}