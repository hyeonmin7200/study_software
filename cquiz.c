#include<stdio.h>
#include<string.h>
#define PI 3.141592
int main(void){
       int money[50],sum[50],*p;
    int nn;
    p =money;
    printf("10000이하의 금액을 입력해 주세요:");
    scanf("%d",money);
    
    if(*p>10000) 
    {   
        printf("10000원보다 큽니다 종료하겠습니다.");
        return 0;
    }
    
    printf("커피 몇 잔 드릴까요:");
    scanf("%d",&nn);
    if(1200*nn>=*p) {
        printf("커피 값이 입력한 값보다 큽니다 종료합니다 .");
        return 0;
    }
    *p = *p - (1200*nn);
    printf("거스름돈 입니다\n");
    printf("5000원권 %d개",p[0]/5000);
    p[1] = p[0] %5000;
    printf("1000원권 %d개",p[1]/1000);
    p[2] = p[1] %1000;
    printf("500원권: %d개",p[2]/500);
    p[3] = p[2] %500;
    printf("100원권: %d개",p[3]/100);
}