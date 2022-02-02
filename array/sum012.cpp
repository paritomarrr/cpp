#include <iostream>
using namespace std;
void sort(int arr[], int n)
{
    int counter = 0;
    while (counter < n)
    {
        for (int i = 0; i < n; i++)
        {
            // int newArr[n];
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                // counter++;
            }
        }
        counter++;
    };
};
int main()
{
    int arr[10] = {0, 0, 2, 1, 1, 0, 2, 1, 0, 2};
    sort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    };
    cout << endl;

    return 0;
}