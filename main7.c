#include<stdio.h>
int main(){
    int n=0;
    int dy[20],i=0;

    scanf("%d",&n);
    dy[0]=n;
  for(i=0;dy[i]!=1;i++)
    {
        if(dy[i]%2==1){
          dy[i+1]=3*dy[i]+1;
        }
        else
            dy[i+1]=dy[i]/2;
        printf("%d ",dy[i+1]);
        printf(" ");//it's strange,it must use something can get the result.


    }
    return 0;
}
