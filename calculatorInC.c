#include<stdio.h>
void addFunc(int,int),subFunc(int,int),prodFunc(int,int),divFunc(int,int);
int main(){
    int a,b;
    printf("Enter 2 Numbers : ");
    scanf("%d%d",&a,&b);
    printf("1. Add 2.Subtract 3.Multiply 4.Divide\n");
    int i=0;
    scanf("%d",&i);
    switch(i){
        case 1:
        addFunc(a,b);
        break;

        case 2:
        addFunc(a,b);
        break;
        
        case 3:
        addFunc(a,b);
        break;

        case 4:
        addFunc(a,b);
        break;

        default:
        printf("Please Enter Appropriate Choice !!");
    }
    return 0;
}
void addFunc(int a,int b){
    printf("\n%d",a+b);
}
void subFunc(int a,int b){
    printf("\n%d",a-b);
}
void prodFunc(int a,int b){
    printf("\n%d",a*b);
}
void divFinc(int a,int b){
    printf("\n%d",a/b);
}