// find val at position pos using bit manipulation
#include <iostream>
using namespace std;
int getBit(int n, int pos)
{
    if (n & (1 << pos) != 0)
    {
        return 1;
    }
    return 0;
};
int setBit(int n, int pos)
{
    int val = (n | (1 << pos));
    return val;
};
int clearBit(int n, int pos)
{
    int val = (1 << pos); // left shift
    // 1's complement
    int comp = (~val);
    // and op
    int final = (n & (comp));
    return final;
};
int updateBit(int n, int pos, int value)
{
    // clearbit
    // left shift
    int val = (1 << pos);
    // ones comp
    int comp = (~val);
    // and op
    int andop = (n & comp);
    return (n | value << pos);
    // return orop;
};
int main()
{

    cout << updateBit(5, 1, 1) << endl;
    return 0;
}