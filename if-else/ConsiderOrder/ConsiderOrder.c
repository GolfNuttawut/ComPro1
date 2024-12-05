#include <stdio.h>
void main()
{
    int X, Y, M, N, requestPlank, requestLog;
    scanf("%d %d %d %d",&X,&Y, &M, &N);
    requestPlank = ((M*2) + (N*1));
    requestLog = ((M*6) + (N*4));
    if(requestPlank <= X && requestLog <= Y)
    {
        printf("Yes %d %d",X-requestPlank, Y-requestLog);
    }
    else
    {
        if(requestPlank <= X)
        {
            printf("No 0 %d", requestLog - Y);
        }
        else if(requestLog <= Y)
        {
            printf("No %d 0",requestPlank - X);
        }
        else
        {
            printf("No %d %d",requestPlank - X, requestLog - Y);
        }
    }
}
