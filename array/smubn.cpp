#include <stdio.h>
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
};
int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
};

int kthSmallest(int arr[], int l, int r, int k)
{

    if (l < r)
    {
        int pi = partition(arr, l, r);
        kthSmallest(arr, l, pi - 1, k);
        kthSmallest(arr, pi + 1, r, k);
    };

    return arr[k - 1];
};
int main()
{
    int test_case;
    scanf("%d", &test_case);
    while (test_case--)
    {
        int numEl;
        scanf("%d", &numEl);
        int a[numEl];
        for (int i = 0; i < numEl; i++)
            scanf("%d", &a[i]);
        int k;
        scanf("%d", &k);
        printf("%d", kthSmallest(a, 0, numEl - 1, k));
        printf("\n");
    }
    return 0;
}