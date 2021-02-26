#include "stdio.h"

/*
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*/
int main()
{
    int n ;
    scanf("%d",&n);

    for(int i = 0 ; i < 2*n-1 ; i++)
    {
        if(i == n-1 || i == n)
            continue;
        for(int j = 0  ; j < 2*n-1 ; j++)
        {
            

            if(i < n)
            {
                if(j >= n-i-1 && j < n+i)
                    printf(" ");
                  else
                    printf("*");
            }
            else
            {
                int x = (i+1)-n;
                if(j >= x && j < (2*n-1)-x)
                    printf(" ");
               else
                    printf("*");
            }
        }
                printf("\n");
    } 
}