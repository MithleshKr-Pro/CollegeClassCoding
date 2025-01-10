#include <stdio.h>
int add(int,int);
int subt(int,int);
int  mul(int ,int);
int div(int,int);
int mod(int,int);
int main(){
    printf("Enter two no. to Calculate : ");
    int a,b,choice,result;
    scanf("%d%d",&a,&b);
    printf("1. Add two no.\n");
    printf("2. subtract two no.\n");
    printf("3. find product of two no.\n");
    printf("4. Divide two no.\n");
    printf("5. find Remainder \n");
    scanf("%d",&choice);
    switch(choice){

        case 1:
        result=add(a,b);
        printf(" Result = %d",result);
        break;

         case 2:
        result=subt(a,b);
        printf(" Result = %d",result);
        break;

         case 3:
        result=mul(a,b);
        printf(" Result = %d",result);
        break;

         case 4:
        result=div(a,b);
        printf(" Result = %d",result);
        break;


         case 5:
        result=mod(a,b);
        printf(" Result = %d",result);
        break;

         default:
         printf("Enter appropriate Choice");
    }
    return 0;
}
int add(int a,int b){
    return a+b;
}
int subt(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int mod(int a,int b){
    return a%b;
}