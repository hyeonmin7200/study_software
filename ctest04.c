#include<stdio.h>
#include<string.h>
void practice01(){
    int num[5];
    int size = sizeof(num)/sizeof(num[0]);
    printf("%d",size);
}

void practice02(){
    int num[4][5];
    int size = sizeof(num)/sizeof(num[0]);
    printf("%d",size);
}

void practice03(){
    double dou[] = {2.1, 3.7,4.87,5.89};
    for(int i =0;i<sizeof(dou)/sizeof(dou[0]);i++) printf("%.2lf\n",dou[i]);
}

void practice04(){
    char str[] ={"coffee"};
    printf("%s",str);
}
void practice05(){
    char str[3][4] ={"he","his","him"};
    /* 보이는 건 한 줄이지만 저장되는건
    {'h','e','\0'},
    {'h','i','m','\0'} 이런식임*/
    for(int i =0;i<sizeof(str)/sizeof(str[0]);i++) printf("%s\n",str[i]);
}
void ex_01(){
    char ch1[4];
    for(int i=0; i<sizeof(ch1)/sizeof(ch1[0]);i++){
        printf("문자입력:");
        ch1[i] = getchar();
        while(getchar() !='\n');
    }
    printf("%s",ch1);
}

void ex_02(){
    char ch1[100];
    for(int i= 0;i<sizeof(ch1);i++){
        printf("문자열 입력:");
        fgets(ch1,100,stdin);
        ch1[strcspn(ch1,"\n")] = '\0';
        printf("strlen사용 =%s\n",ch1);

        printf("문자열 입력:");
        fgets(ch1,100,stdin);
        printf("strlen 미사용: %s",ch1);
    }
}
void ex_03(){
    char ch1[50];
    int sum;
    printf("문자열입력:");
    fgets(ch1,50,stdin);
    if(ch1[strlen(ch1-1) =='\n']) ch1[strlen(ch1-1)]=='\0';
    printf("입력된 문자열의 길이:%d",strlen(ch1));
}
void ex_04(){
    char ch1[50];
    while(1){
    printf("문자열입력:");
    fgets(ch1,50,stdin);
    if(ch1[0] =='\n') break;
    if(ch1[strlen(ch1)-1 =='\n']) ch1[strlen(ch1)-1]='\0';
    printf("입력된 문자열의 길이:%d\n",strlen(ch1));
    }
}
void ex_05(){
    char ch1[100];
    char ch2;
    int sum;
    while(1){
        printf("문자열입력:");
        fgets(ch1,100,stdin);
        if(ch1[0] == '\n') break;
        if(ch1[strlen(ch1)-1 =='\n']) ch1[strlen(ch1)-1]='\0';

        printf("문자입력:");
        ch2 = getchar();
        while(getchar() != '\n');
        sum =0;
        for(int i =0;i<sizeof(ch1)/sizeof(char);i++){
            if(ch1[i] == ch2) sum++;
        }
        printf("%s에서 %c는 %d개\n",ch1,ch2,sum); 
    }
}
void ex_06(){
    char stra[100],strb[100];
    printf("문자열입력:");
    fgets(stra,100,stdin);
    if(stra[strlen(stra)-1 =='\n']) stra[strlen(stra)-1]='\0';
    printf("stra: %s",stra);
    for(int i =0;i<sizeof(stra)/sizeof(char);i--)
    {
        strb[i]==stra[strlen(stra)-i];
        strb[strlen(strb)+1] == '\0';
    }
    printf("%s",strb);
}
void ex_07(){
    char ch1[2][100];
    while(1){
        printf("문자열입력:");
        fgets(ch1[0],100,stdin);
        if(ch1[0][strlen(ch1[0])-1 =='\n']) ch1[0][strlen(ch1[0])-1]='\0';
        if(ch1[0][0] == '\0') break;
        printf("문자열입력:");
        fgets(ch1[1],100,stdin);
        if(ch1[1][strlen(ch1[1])-1 =='\n']) ch1[1][strlen(ch1[1])-1]='\0';
        int i =0;
        while(ch1[0][i] !='\0' && ch1[1][i] != '\0'){
            if(ch1[0][i] != ch1[1][i]) break;
            i++;
        };
            if(ch1[0][i] =='\0' && ch1[1][i] == '\0'){
                printf("같음\n");
            }
            else{
                printf("다름\n");
            }
    }
}

void ex_08(){
    int from[4];
    int sum1,min1 =100,max1 =0;
    for(int i =0;i<sizeof(from)/sizeof(int);i++){
        printf("정수입력:");
        scanf("%d",&from[i]);
        sum1 +=from[i];
        max1 = from[i]>max1?from[i]:max1;
        min1 = from[i]>min1?min1:from[i];
    }
    printf("합:%d\n 가장 큰 수:%d\n 가장 작은 수:%d",sum1,max1,min1);
}

void ex_09(){
    int from[4],to[4];
    for(int i =0;i<sizeof(from)/sizeof(int);i++){
        printf("정수입력:");
        scanf("%d",&from[i]);
        to[i] = from[i];
        
    }
    printf("from배열: %d, to배열: %d\n",from[0],to[0]);
    printf("from배열: %d, to배열: %d\n",from[1],to[1]);
    printf("from배열: %d, to배열: %d\n",from[2],to[2]);
    printf("from배열: %d, to배열: %d\n",from[3],to[3]);
    }

void ex_10(){
    char str[100];
    int count[5] = {0};  // 0~4 카운트
    int max1 = 0;
    int num1 = 0;
    printf("0부터 4까지의 수 입력:");
    fgets(str,100,stdin);
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    for(int i =0;i<sizeof(str)/sizeof(char);i++){ 
        if(str[i]>='0' && str[i]<='4'){
            count[str[i]-'0']++;
        }
    }
    max1 = count[0];
    for(int j=1;j<sizeof(count)/sizeof(int);j++){
        if(count[j]>max1){
            max1 = count[j];
            num1 = j;
        }
    }
    printf("가장많이 입력된 수:%d",num1);
    printf("입력된 횟수:%d",max1);
}
void ex_11(){
    char ch1[100];
    int num1;
    int i;
    while(1){
        printf("정수입력:");
        scanf("%d",&num1);
        if(num1 == 0) break;

        i =0;
        if(num1 == 0){
            ch1[i++] = '0';
        }
        else{
            while(num1>0){
                ch1[i++] = (num1%2) + '0';
                num1/=2;
            }
        }
        ch1[i] = '\0';

        for(int j =0; j<i/2;j++){
            char temp = ch1[j];
            ch1[j] = ch1[i -j -1];
            ch1[i -j - 1] = temp;
        }
        printf("2진수 변환:%s\n",ch1);
    }
    
}
int main(){
    ex_11();
    return 0;
}