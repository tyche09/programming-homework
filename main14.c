#include<stdio.h>
//��д���Լ��GCD����
/*********Begin*********/
long long int g(long long int m,long long int n){
 int s,p;
if(m<n){
    p=m;
    m=n;
    n=p;
}
s=m%n;
while(n%s!=0){
s=n%s;
}
return s;}
/*********End**********/

//��д��С������LCM����
/*********Begin*********/
long long int l(long long int m,long long int n,long long int s){
    long long int q;
   q=(m*n)/s;
    return q;
}
/*********End**********/
int main(void)
{
    /*********Begin*********/
    long long int m,n;
    long long int s,t;
    scanf("%lld %lld",&m,&n);
    s=g(m,n);
    t=l(m,n,s);
    if(s<=0 ||t<=0){
        printf("Input Error\n");
    }
    else
    printf("%lld %lld",s,t);
    /*********End**********/
    return 0;
}
