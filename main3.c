#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int n=rand();
    int a=0,b=0;
    printf("随机输入的数：%d",n);
    while (n !=0){
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    printf("反向输出的数：%d\n",b);
    return 0;

    }
