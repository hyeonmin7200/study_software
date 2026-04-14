#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char stra[100],strb[100];
    
    while(1){
        int i =0;
        printf("문자열 입력:");
        fgets(stra,100,stdin);
        if(stra[strlen(stra)-1] =='\n')stra[strlen(stra)-1] = '\0';
        if(stra[0] == '\0') break;
        printf("문자열 입력:");
        fgets(strb,100,stdin);
        if(strb[strlen(strb)-1] =='\n')strb[strlen(strb)-1] = '\0';
        while(stra[i] != '\0' && strb[i] !='\0'){
            if(stra[i] != strb[i]) break;
                i++;
        }
            if(stra[i] == '\0' && strb[i] =='\0'){
            printf("같음\n");
            
        }
        else printf("다름\n");
    }
   

}
