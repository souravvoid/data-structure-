#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T;
    printf("enter the how many test case you want try:");
    scanf("%d",&T);
    while(T--)
    {
        int n;
        printf("enter the size of n :");
        scanf("%d",&n);
        int num,result = 0;
        for(int i = 0 ; i<n ; i++)
        {
            scanf("%d",&num);
            result ^= num;

        }
    
        printf("%d\n",result);
    }
    
   return 0;


}