#include <stdio.h>

void main(){
    int borrow,year;
    double total;
    printf("��͡�ӹǹ�Թ����ͧ��á��: ");
    scanf("%d",&borrow);
    printf("��͡�ӹǹ�շ���ͧ��á��: ");
    scanf("%d",&year);
    if(borrow<15000){
        total = borrow+borrow*0.02*year;
        printf("�Դ�͡���� 2%% ��ͻ�\n");
        printf("�س��ͧ���Ф׹ = %.2lf �ҷ", total);
    }
    else if(borrow<=120000){
        total = borrow+borrow*0.018*year;
        printf("�Դ�͡���� 1.8%% ��ͻ�\n");
        printf("�س��ͧ���Ф׹ = %.2lf �ҷ", total);
    }
    else{
        int dif = borrow-120000;
        total = borrow+(120000*0.017*year)+(dif*0.016*year);
        printf("�Դ�͡����Ẻ��鹺ѹ�:\n");
        printf("120000 �á �Դ 1.7%% ��ͻ�\n");
        printf("��ǹ�Թ %d �Դ 1.6%% ��ͻ�\n",dif);
        printf("�س��ͧ���Ф׹ = %.2lf �ҷ", total);
    }
}
