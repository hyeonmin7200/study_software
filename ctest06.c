#include<stdio.h>
#include<string.h>
void ex_01(){
    double source[] = {1.21, 3.43, 5.65, 7.87, 8.98};
    double *p,target[sizeof(source)/sizeof(double)];
    for(int i =0;i<sizeof(source)/sizeof(double);i++){
        printf("source = %.2lf\n",source[i]);
    }
    p = source;
    for(int i =0;i<sizeof(source)/sizeof(double);i++){
        
        target[i] = *(p+i);
        printf("target = %.2lf\n",target[i]);
    }
}
void ex_02(){
    double source[] = {1.21, 3.43, 5.65, 7.87, 8.98};
    double *p,pl;
    double size = sizeof(source)/sizeof(double), target[sizeof(source)/sizeof(double)];
    for(int i =0;i<size;i++){
        printf("source = %.2lf\n",source[i]);
    }
    printf("\nsource 각 원소에 더할 값 입력:");
    scanf("%lf",&pl);
    p = source;
    for(int i =0;i<size;i++){
        target[i] = (*(p+i) + pl);
        printf("target = %.2lf",target[i]);
    }

}
void ex_03(){
    int from[4],*p,sum,max,min;
    for(int i=0;i<sizeof(from)/sizeof(int);i++){
        printf("정수입력:");
        scanf("%d",&from[i]);
        sum +=from[i];
    }
    p =from;
    min = max = p[0];
    for(int i=0;i<sizeof(from)/sizeof(int);i++){
        max = p[i]>max?p[i]:max;
        min = p[i]<min?p[i]:min;
    }
    printf("합:%d",sum);
    printf("가장 큰 수=%d",max);
    printf("가장 작은 수 %d",min);
}
void ex_04(){
    char ch1[50],ch2[50],*p;
    int length = 0;
    p = ch1;
    printf("한 단어를 입력하세요:");
    fgets(ch1,100,stdin);
    if(ch1[strlen(ch1)-1] == '\n') ch1[strlen(ch1)-1] == '\0';
    length = strlen(p);
    p = ch1 + (length -1);
    for(int i =0;i<length;i++){
        ch2[i] =*p;
        p--;
    }
    ch2[length] = '\0';
    printf("단어를 뒤집습니다:%s\n",ch2);
}
void ex_05(){
    char ch1[50],*p;
    int cnt = 0;
    printf("문자열 입력:");
    fgets(ch1,100,stdin);
    if(ch1[strlen(ch1)-1] == '\n') ch1[strlen(ch1)-1] == '\0';
    p =ch1;
    printf("%s",p);
    while(*p){
        cnt++;
        p++;
    };
    printf("입력된 문자열의 길이: %d",cnt-1);
}   
void ex_06(){
    char ch1[50],*p;
    int cnt;
    p = ch1;
    while(1){
        printf("문자열 입력:");
        fgets(ch1,100,stdin);
        if(ch1[strlen(ch1)-1] == '\n') ch1[strlen(ch1)-1] == '\0';
        if(p[0] == '\0') break;

        cnt =0;
        while(*p){
            cnt++;
            p++;
        }
        printf("입력된 문자열의 길이:%d\n",cnt-1);
    }

}
void ex_07(){
    char ch1[50],*p,ch2;
    p = ch1;
    int cnt;
    while(1){
        printf("\n문자열 입력:");
        fgets(ch1,100,stdin);
        if(ch1[strlen(ch1)-1] == '\n') ch1[strlen(ch1)-1] = '\0';
        if(p[0] == '\0') break;
        printf("문자입력:");
        ch2 = getchar();
        while(getchar()!= '\n');
        cnt =0;
        for(int i =0;i<sizeof(p)/sizeof(char);i++){
            if(p[i] == ch2) cnt++;
        }
        printf("%s에서 %c는 %d개",p,ch2,cnt);
    }
}
void ex_08(){
    char ch1[50],ch2[50],*p,*b;
    p = ch1;
    b = ch2;
    printf("\n문자열 입력:");
    fgets(ch1,100,stdin);
    if(ch1[strlen(ch1)-1] == '\n') ch1[strlen(ch1)-1] = '\0';

    printf("\n문자열 입력:");
    fgets(ch2,100,stdin);
    if(ch2[strlen(ch2)-1] == '\n') ch2[strlen(ch2)-1] = '\0';
    printf("sa= %s, sb = %s",p,b);
    while(*p){
        p++;
    }
    while(*b){
        *p = *b;
        p++;
        b++;
    }
    *p ='\0';
    printf("합쳐진 결과:%s",ch1);
}
void ex_09(){
    char ch1[2][100], *p,*b;
    p = ch1[0];
    b = ch1[1];
    printf("\n문자열 입력:");
    fgets(ch1[0],100,stdin);
    if(ch1[0][strlen(ch1[0])-1] == '\n') ch1[0][strlen(ch1[0])-1] = '\0';

    printf("\n문자열 입력:");
    fgets(ch1[1],100,stdin);
    if(ch1[1][strlen(ch1[1])-1] == '\n') ch1[1][strlen(ch1[1])-1] = '\0';

    while(*p) {
        p++;
    }


    while(*b){
        *p =*b;
        p++;
        b++;
    }
    *p = '\0';
    printf("[0] = %s [1] = %s",ch1[0]/* 합친 값 나옴 위에서 받은 값 출력이 best*/,ch1[1]);
    printf("\n%s",ch1[0]);
    

}
void ex_10(){
    char ch1[50],ch2[50],*p,*b;
    p = ch1;
    b  = ch2;
    int i;
    printf ("문자열입력:");
    fgets(ch1,100,stdin);
    if(ch1[strlen(ch1)-1] == '\n') ch1[strlen(ch1)-1] = '\0';
    for(i = 0; i <sizeof(p)/sizeof(char);i++){
        if('a'<=p[i] && p[i]<='z'){
        b[i] = p[i] -32;
        }
        else b[i] =p[i];
    }
    b[i]= '\0';
    printf("대문자:%s",ch2);

}
void ex_11(){
    char str[2][100],*p,*b;
    int i =0;
    p = str[0];
    b = str[1];

    printf("문자열입력:");
    fgets(str[0],100,stdin);
    if(str[0][strlen(str[0])-1] == '\n') str[0][strlen(str[0])-1] = '\0';
    for(i =0;i<sizeof(p)/sizeof(char);i++){
    if('a'<=p[i] && 'z'>=p[i]){
        b[i] = p[i] -32;       
    }
    else{
        b[i] = p[i];
    }
    
    
}
    b[i] = '\0';
    printf("str[0] = %s,str[1] = %s",str[0],str[1]);
}
void ex_12(){
    char ch1[50],ch2[50],*p,*b;
    int i =0,same =1;
    p = ch1;
    b = ch2;
    printf("\n문자열 입력:");
    fgets(ch1,100,stdin);
    if(ch1[strlen(ch1)-1] == '\n') ch1[strlen(ch1)-1] = '\0';

    printf("\n문자열 입력:");
    fgets(ch2,100,stdin);
    if(ch2[strlen(ch2)-1] == '\n') ch2[strlen(ch2)-1] = '\0';
    for(i =0;p[i] !='\0' || b[i] !='\0';i++){
        if(p[i] != b[i]){
            same =0;
            break;
        }
    }
    if(same) printf("%s,%s 같음",ch1,ch2);
    else printf("%s,%s 다름",ch1,ch2);

}
void ex_13(){
    char ch1[2][100], *p,*b,kor1;
    int same = 0;
    p = ch1[0];
    b = ch1[1];
    
    
    while(1){
        printf("\n문자열 입력:");
        fgets(ch1[0],100,stdin);
        if(ch1[0][strlen(ch1[0])-1] == '\n') ch1[0][strlen(ch1[0])-1] = '\0';
        if(p[0] == '\0') {
            break;
        }
        printf("문자열 입력:");
        fgets(ch1[1],100,stdin);
        if(ch1[1][strlen(ch1[1])-1] == '\n') ch1[1][strlen(ch1[1])-1] = '\0';
        
    for(int i =0;p[i]!= '\0' || b[i]!= '\0';i++){
        if(p[i] == b[i]){
            same =1;
        }
        else{
            same = 0;
            break;
        }
    }
    if(same) printf("%s %s 같음",ch1[0],ch1[1]);
    else printf("%s %s 다름",ch1[0],ch1[1]);
}
    
}
void ex_14(){
    char strs[2][100] = {"i like an apple."},*p,*b;
    int i =0;
    p = strs[0];
    b = strs[1];
    for(i =0;i<strlen(p);i++){
        if('a'<=p[i] && 'z'>=p[i]){
        b[i] = p[i] -32;
        }
        else b[i] = p[i];
    }
    b[i] = '\0';
    printf("strs[0] = %s\nstrs[1] = %s",strs[0],strs[1]);
}
int main(){
    ex_14();
    return 0;
}