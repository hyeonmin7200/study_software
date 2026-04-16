#include<stdio.h>
void push_star1(){
    int num1;
    printf("star_input:");
    scanf("%d",&num1);
     for(int i =0;i<num1;i++){
        for(int a = i;a>0;a--){
                printf(" ");
            }
        for (int j =num1-i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
void push_star2(){
  int num1;
    printf("star_input:");
    scanf("%d",&num1);
     for(int i =0;i<num1;i++){
        for(int a = i;a>0;a--){
                printf(" ");
            }
        for (int j =num1-i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}

void push_star10(){
    int num1;
    scanf("%d",&num1);
    int sum1 = (num1 *2 -1);
    for(int i = 0;i<=sum1 -(num1);i++){
        for(int j =0;j<i;j++){
            printf(" ");
        }
        for(int a = sum1 -i*2;a>0;a--){
            printf("*");
        }
        for(int j =0;j<i;j++){
            printf(" ");
        }
        printf("\n");
    }
     for(int i = sum1 -(num1)-1;i>=0;i--){
        for(int j =0;j<i;j++){
            printf(" ");
        }
        for(int a = sum1 -i*2;a>0;a--){
            printf("*");
        }
        for(int j =0;j<i;j++){
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
   push_star10();
   return 0;
}