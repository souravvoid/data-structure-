#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isvalid( char s[100] )
{
    int  max_len = 0 ,left =0 ,right =0  ;
    for(int i =0 ; i<strlen(s)-1;i++)
    {
        if(s[i]= '(')
        { left++;
        }

        else
           right++;
        if left == right
        {
         max_len = max(max_len,2*right);
        }
        else if right> left
               left = 0;
               right = 0 ;
    }
    for(int i= 0 ;i<strlen(s)-1;i++)
    {
        if(s[i]= ')')
          right++;
        else
          left++;
        if  left == right
            max_len = max(max_len,2*left);
        else if left>right
         left = 0 ;
         right = 0;
        
        return result;

    }


    }

}

int main()
{   int T;
    printf("enter the test series");

    scanf("%d",&T);
    return 0;
    result = isvalid();

}