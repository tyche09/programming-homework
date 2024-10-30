#include <stdio.h>
int main(){

int num[7],minus;
int first=0,next=1;
printf("请输入一个数字序列：\n");
for(int i = 0;i <=6;i++)
    {
    printf("第%d个数：",i+1);
    scanf("%d",&num[i]);
}
for(;next<=6; first++,next++){
    minus=num[next]-num[first];

    printf("%d\t",minus);}
return 0;
}
