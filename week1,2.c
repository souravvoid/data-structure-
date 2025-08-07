#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    int n;
    int T;
    printf("value of T : ");
    scanf("%d", &T);
    while (T--)
    {
        printf("Enter value of n :");
        scanf("%d", &n);
        int arr[n];
        printf("enter elements : ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int a, b, idx1 = -1, idx2 = -1, dis;
        printf("Enter value of a and b :");
        scanf("%d%d", &a, &b);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == a)
            {
                idx1 = i;
            }
            else if (arr[i] == b)
            {
                idx2 = i;
            }
            if (idx1 != -1 && idx2 != -1)
            {
                if (abs(idx1 - idx2) < dis)
                {
                    dis = abs(idx1 - idx2);
                    printf("Distance is: %d\n", dis);
                }
            }
        }
    }
}