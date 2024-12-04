//shijinzhi--erjinzhi
#include<stdio.h>
int main(){
    long long n;
    int yf[31],i=0,j=0;
    while(scanf("%lld",&n)==1){
        i=0;
        j=0;
    do{
        yf[i++]=n%2;
        n=n/2;
    }while(n !=0);
    for(j=i-1;j>=0;j--){
        printf("%d",yf[j]);}
        printf("\n");
    }

return 0;
}
