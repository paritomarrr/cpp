#include <iostream>
using namespace std;
int main()
{
    string Name = "Pari.tomar.is.cool";
    string word = "";
    string Words[4];
    int i = 0;
    // while (Name[i] != '.')
    // {
    //     word += Name[i];
    //     i++;
    // }
    cout << "start";
    // cout << word; // pari
    while (i < 4)
    {
        while (Name[i] != '.')
        {
            word += Name[i];
            i++;
        };
        Words[i] = word;
        // cout << word;
        i++;
    }
    cout << "after loop 1 ";

    for (int i = 0; i < 4; i++)
    {
        cout << Words[i];
    }
    cout << "final";
    return 0;
}