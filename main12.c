#include<stdio.h>
//编写题目要求的函数
/*********Begin*********/
double f(int i){
    double num;
    if(i==1)
    num=1;
    else
    num=i*f(i-1);
    return num;
}
double t(int i){
    double num1;
    if(i==1)
    num1=3;
    else
    num1=(2*i+1)*t(i-1);
    return num1;
}
/*********End**********/
int main(void)
{
    /*********Begin*********/
int n;
double s=1.0,m;
scanf("%d",&n);
for(int i=1;i <=n;i++){
    m=f(i)/t(i);
    s+=m;
}
printf("%.10lf\n",s);
    /*********End**********/
    return 0;
}
