#include <iostream>
using namespace std;
void sortIt(int arr[], int size, int key)
{
    int counter = 0;
    for (int i = 0; i < size - counter; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        };
        counter++;
    }
    // cout << arr[key];
};
int main()
{
    int size;
    cin >> size;
    int arr[100];
    int key;
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    sortIt(arr, size, key);
    cout << arr[key - 1];
    return 0;
}