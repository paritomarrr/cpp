 int z = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (nums[i] - nums[j] == k)
            {
                z++;
            }
        }
    }
    cout << z;