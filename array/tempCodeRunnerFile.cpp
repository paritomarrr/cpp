sort(arr, arr + n);
    int sum;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
        if (arr[n - 1] <= 0)
        {
            sum = arr[n - 1];
            // break;
        }
    }