#include <iostream>
using namespace std;
void sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum is -> " << sum;
}
int main()
{
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sumArray(arr, size);
    return 0;
}