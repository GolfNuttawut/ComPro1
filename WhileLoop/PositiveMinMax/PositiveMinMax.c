#include <stdio.h>
#include <limits.h>
int max = INT_MIN, min = INT_MAX;
void main()
{
    int i = 0;
    while(i<8)
    {
        int n;
        scanf("%d",&n);
        i++;
        if(n>0)
        {
            if(n>max)
            {
                max = n;
            }
            if(n<min)
            {
                min = n;
            }
        }
    }
    printf("%d\n%d",max, min);
}
