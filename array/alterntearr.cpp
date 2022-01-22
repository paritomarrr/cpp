#include <stdio.h>
int main()
{
    int n, arr[];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };
    for (int i = 0; i < n; i++)
    {
        printf(arr[i]);
        i++;
    };
    return 0;
}