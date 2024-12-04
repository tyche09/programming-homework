#include<stdio.h>
#include<math.h>
int main(){
    int N;
    int A,B;
    int m,n=0,count=0,t=0;
    scanf("%d\n",&N);
    while(scanf("%d %d",&A,&B) == 2){
            count=0;
    n=0;
            while(A%10 ==0 ){

                count++;
                A=A/10;
            }
       while(A !=0 ){
       m=A%10;
       n=n*10+m;

       A=A/10;
       }

        n=n*pow(10,count);
        t=n*B;
        printf("%d\n",t);
    }
    return 0;
}



