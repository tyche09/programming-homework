#include <stdio.h>


int main()
{
    int a=0,b=0,m=0;
    int n=0;
    printf("输入一个两位数：%d", n);
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    m=a*10+b;
    printf("反向输出的数：%d",m);
    return 0;
}
