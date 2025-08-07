
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    
    int T;
    printf("value of T : ");
    scanf("%d", &T);
    while (T--)
    {
        int n;
        printf("Enter value of n :");
        scanf("%d", &n);
        int arr[n];
        printf("enter elements : ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int a,b;
        scanf("%d",&a);
        scanf("%d", &b);
        int min_dis = INT_MAX;
        int prev =-1;
        for(int i=0;i<n;i++){
            if(arr[i]==a||arr[i]==b){
                if(prev!=-1 && arr[i]!=arr[prev]){
                    int dist = i- prev;
                    if(dist <min_dis){
                        min_dis=dist;
                    }
                }
            }
            prev =i;
        }
    }
    if(min_dis == INT_MAX){
        printf("-1");
    }else{
        printf("%d",min_dis);
    }
}
      


/*
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    
    int T;
    printf("value of T : ");
    scanf("%d", &T);
    while (T--)
    {
        int n,*arrp;
        printf("Enter value of n :");
        scanf("%d", &n);
        arrp = (int*)malloc(sizeof(int));
        printf("enter elements : ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (arrp+i));
        }
        int a,b,index1 = -1 ,index2 = -1;
        


*/