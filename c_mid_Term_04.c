#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void ex_01(){
    double num1 = 0,sum1;
    do{
        printf("숫자를 입력하세요:");
        scanf("%lf",&num1);
        if(-100<=num1 && 100>=num1){
            sum1+=num1;    
        }
        else break;
    }while(1);
    printf("-100 이상 100 이하 숫자들의 합 =%.2lf",sum1);
}
void ex_04(){
    char ch1;
    printf("문자를 입력하시오:");
    do{
        ch1 = getchar();
        while(getchar()  == '\n');
    }while(1);
}
void ex_05(){
    int num1,binary[32],*p;
    p = binary;
    int count = 0;
    printf("정수를 입력하세요:");
    scanf("%d",&num1);
    while(num1>=1){
        *p= num1 %2;
        num1 =num1/2;
        p++;
        count++;
         
    }
    p--;
    printf("\n2진수는 = ");
    for(int i =0;i<count;i++){
        printf("%d",*p);
        p--;
    }

}
void ex_bit(){
    int num1,sum;
    printf("정수입력:");
    scanf("%d",&num1);
    for(int i = 31;i>=0;i--){
        printf("%d",(num1>>i)&1);
    }
}
void ex_shift(){
    int num1,cnt;
    printf("정수를 입력하세요:");
    scanf("%d",&num1);
    while(num1>0){
        if(num1&1){
            printf("1");
        }
        else{
            printf("0");
        }
        num1 = num1>>1;
    }
}
void test(){
    char ch1 = 'a';
    int ch2 = ch1;
}
void ex_10(){
    char ch1;
    int sum;
    while(1){
        printf("문자 입력:");
        ch1 = getchar();
        while(getchar() != '\n');
        if(isalnum(ch1) == 0) {
            printf("종료합니다");
            break;
            }
        if(isdigit(ch1) == 1) {
            printf("숫자입니다");
            sum += ch1 -'0';
            printf("지금까지의 숫자들의 합: %d\n",sum);
        }
        if(ch1>= 'a' && 'z'>=ch1) printf("소문자입니다\n");

        if(ch1>= 'A' && 'Z'>= ch1) printf("대문자입니다\n");
    

}
}
void ex_11(){
    for(int i =0;i<7;i++){
        for(int a =0;a<7-i;a++){
            printf(" ");
        }
        for(int j =-i;j<=i;j++){
            printf("%d",abs(j));
        }
        printf("\n");
    }
}
int ex_11_2(){
    char ch1[50];
    int from[5] = {0};
    int max1;
    int num1;
    printf("0부터 4까지의 수 입력:");
    fgets(ch1,100,stdin);
    if(ch1[strlen(ch1)-1] == '\n') ch1[strlen(ch1)-1] = '\0';
    for(int i =0;i<strlen(ch1);i++){
        if(ch1[i]-'0'>=2 && ch1[i]-'0'<=4){
            from[ch1[i]-'0'] +=1;
        }
    }
    max1 = from [0];
    for(int j =0;j<sizeof(from)/sizeof(int);j++){
        if(from[j]>max1){
            max1 = from[j];
            num1 = j;
        }
    }
    printf("가장 많이 입력된 수 :%d",num1);
    printf("입력 횟수:%d",max1);

}
int main(){
    ex_11_2();
    return 0;
}