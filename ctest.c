#include<stdio.h>
void ex_02(){
    printf("%c -%c = %d",'a','A','a'-'A');
    printf("\n%c -%c = %d",'0','1','0'-'1'); 
}
void ex_03(){
    int in,bit8;
    char bit16[] = "ABCDEF";
    printf("정수입력:");
    scanf("%d",&in);
    *bit16 = in>=10?(in*10)/10:in;
    bit8 = in>7?in +2:in;
    printf("8진수:%d,10진수:%d,16진수:0x%c",bit8,in,bit16);
    
}
int main(){
    ex_03();
    return 0;
}