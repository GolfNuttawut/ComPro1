#include <stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if(n<0)
    {
        n *= -1;
        for(int i=n; i>0; i--)
        {
            for(int j=i; j>0; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid");
    }
}
