#include <iostream>
using namespace std;
void reverseString(char arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    };
};
int main()
{
    char ch[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> ch[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl
         << endl;

    reverseString(ch, 5);
    for (int i = 0; i < 5; i++)
    {
        ch[i] << " ";
    }
    cout << endl
         << endl;
    cout <<
}