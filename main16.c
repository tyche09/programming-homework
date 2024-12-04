#include<stdio.h>
int value(int y,int m1,int d1,int m2,int d2){
    int t=0;
    if(m1==m2)
    t=d2-d1;
    else if(m1>m2){
       for(int i=m2;i<m1;i++){
         if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
             t+=31;
         else if(i==4||i==6||i==9||i==11)
             t+=30;
             else {
                 if(y%4==0&&y%100!=0 ||y%400==0)
                 t+=29;
                 else
                 t+=28;
             }
     }
     t=-(t-d2+d1);
    }
    else{ for(int i=m1;i<m2;i++){
         if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
             t+=31;
         else if(i==4||i==6||i==9||i==11)
             t+=30;
             else {
                 if(y%4==0&&y%100!=0 ||y%400==0)
                 t+=29;
                 else
                 t+=28;
             }
     }
     t=t+(d2-d1);}
     return t;
}
int main(){
    int y,m1,d1,m2,d2;
    scanf("%d %d %d  %d %d",&y,&m1,&d1,&m2,&d2);
    printf("%d",value(y,m1,d1,m2,d2));
}
