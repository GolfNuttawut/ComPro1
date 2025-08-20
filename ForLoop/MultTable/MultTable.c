#include <stdio.h>
void main(){
    int number;
    scanf("%d", &number);
    if(number > 0 && number <= 99){
        for(int i=1;i<=12;i++){
            if(number*12 < 100){
                printf("%d x %2d = %2d\n", number, i, number*i);
            }
            else if(number*12 < 1000){
                printf("%d x %2d = %3d\n", number, i, number*i);
            }
            else{
                printf("%d x %2d = %4d\n", number, i, number*i);
            }
        }
    }
    else{
        printf("Number is out of range");
    }
}
