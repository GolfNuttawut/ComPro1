#include <stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    if(N>0)
    {
        int i=1;
        while(i<=N)
        {
            printf("%d\n",i);
            i++;
        }
    }
    else{
        printf("Invalid input");
    }
}
