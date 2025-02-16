#include<stdio.h>
#include<math.h>
int factorial (int);
// long long int power(int ,int );
int main(){
    int n,x,ans=0;
    scanf("%d",&n);
    scanf("%d",&x);
    
    return 0;
}

int factorial(int n){
    int ans=1;
    while(n>1){
        ans*=n;
        n--;
    }
    return ans;
}

// long long int power(int n,int x){

// }