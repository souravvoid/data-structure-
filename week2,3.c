#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int mat[n][n];
    int i,j;
    for(i = 0; i<n; i++)
    {
        for(int j = 0 ;j <n ; j++)
        {
            scanf("%d",&mat[i][j]);

        }

    }
    int row = 0 ,col = 0;
    int prev , current;
    int lastcol  = n,lastrow = n;
    while (row <lastrow && col <lastcol)
    {
      if (row +1 ==lastrow || col+1 == lastcol)
           break;



           prev = mat[row+1][col];
        
           for(i=col; i<lastcol;i++)
           {
             current = mat[row][i];
             mat[row][i]=prev;
             prev = current ;

           }
           row ++;

           for(i = row;i< lastrow ;i++)
           {
            current = mat[i][lastcol-1];
            mat[i][lastcol-1] = prev;
            prev=current;

           }
           lastcol--;

           for(i = lastcol;i>=col;i--)
           {
             current = mat[lastrow-1][i];
             mat[lastrow-1][i] = prev;
             prev = current;

           }
           lastrow--;

           for(i=lastrow ; i>=row;i--)
           {
              current = mat[i][col];
              mat[i][col] = prev;
              prev = current;
           }
           col++;      

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",mat[i][j]);

        }
        printf("\n");

    }
    return 0;
    
}
