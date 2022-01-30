int factorial(int num)
{
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
        fact = fact * i;
    }
    // return fact;
    if (num == 1)
    {
        cout << 1;
    };
    return fact;
};