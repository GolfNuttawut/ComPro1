#include <stdio.h>

void main(){
    int borrow,year;
    double total;
    printf("กรอกจำนวนเงินที่ต้องการกู้: ");
    scanf("%d",&borrow);
    printf("กรอกจำนวนปีที่ต้องการกู้: ");
    scanf("%d",&year);
    if(borrow<15000){
        total = borrow+borrow*0.02*year;
        printf("คิดดอกเบี้ย 2%% ต่อปี\n");
        printf("คุณต้องชำระคืน = %.2lf บาท", total);
    }
    else if(borrow<=120000){
        total = borrow+borrow*0.018*year;
        printf("คิดดอกเบี้ย 1.8%% ต่อปี\n");
        printf("คุณต้องชำระคืน = %.2lf บาท", total);
    }
    else{
        int dif = borrow-120000;
        total = borrow+(120000*0.017*year)+(dif*0.016*year);
        printf("คิดดอกเบี้ยแบบขั้นบันได:\n");
        printf("120000 แรก คิด 1.7%% ต่อปี\n");
        printf("ส่วนเกิน %d คิด 1.6%% ต่อปี\n",dif);
        printf("คุณต้องชำระคืน = %.2lf บาท", total);
    }
}
