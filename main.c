#include <stdio.h>
int main(){

int num[7],minus;
int first=0,next=1;
printf("������һ���������У�\n");
for(int i = 0;i <=6;i++)
    {
    printf("��%d������",i+1);
    scanf("%d",&num[i]);
}
for(;next<=6; first++,next++){
    minus=num[next]-num[first];

    printf("%d\t",minus);}
return 0;
}
