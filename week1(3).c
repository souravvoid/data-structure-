#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
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