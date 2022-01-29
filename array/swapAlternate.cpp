#include <iostream>
using namespace std;
void swapAlt(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        swap(arr[i], arr[i + 1]);
        i++;
    }
    if (size % 2 == 1)
    {
        arr[size - 1] = arr[size - 1];
    }
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
    swapAlt(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    return 0;
}