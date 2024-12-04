#include<stdio.h>
char l(int i){
   char a[40]="0123456789ABCDEF";
    if(i/16>16){
        l(i/16);
        printf("%c",a[i%16]);
    }
    else {
        printf("%c%c",a[i/16],a[i%16]);
    }
}
int main(){
    int a,b;
    int i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        l(i);
        printf(" ");
    }
}


