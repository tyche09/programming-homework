//qinmishu
#include<stdio.h>
void solve(){
    /*********Begin*********/
  /*  long b,t,i,a;
     b=0;
    for(a=1;a<=3000;a++){
        for(i=1;i<a;i++){
            if(a%i==0)
                b+=i;

        }
        t=0;
        for(i=1;i < b;i++){
            if(b%i==0)
               t+=i;
        }
        if(t==a&&a<b){
           printf("(%d,%d)",a,b);
        }
    }*/
    /*********End**********/
    long i, a, b1, b2;
for (a = 1; a <= 3000; a++) {
b1 = 0;
for (i = 1; i < a; i++) {
if (a % i == 0)
b1 += i;
}
b2 = 0;
for (i = 1; i < b1; i++) {
if (b1 % i == 0)
b2 += i;
}
if (b2 == a && a < b1)
printf("(%d,%d)", a, b1);
}
}
int main(void)
{
    solve();
    return 0;
}
