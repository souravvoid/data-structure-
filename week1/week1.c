#include <stdio.h>
void leftrotate(int arr[], int n, int k)
{
    for (int i = k; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int T;
    printf("value of T : ");
    scanf("%d", &T);
    while (T--)
    {
        int n, k;
        printf("size of array: ");
        scanf("%d", &n);

        int arr[n];
        printf("Elements of an array : ");
        for (int i = 0; i < n; i++)
        {

            scanf("%d", &arr[i]);
        }
        printf("No. of times array will rotate : ");
        scanf("%d", &k);
        leftrotate(arr, n, k);
    }
    return 0;
}