#include <stdio.h>


int main()
{
    int a=0,b=0,m=0;
    int n=0;
    printf("����һ����λ����%d", n);
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    m=a*10+b;
    printf("�������������%d",m);
    return 0;
}
