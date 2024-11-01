#include<stdio.h>
#include<math.h>
	int main(void)
	{
	float b,price;
	scanf("%f",&b);
	 if ( b>0){
           if((b-(int)(b*10)/10) ==0){
              price=15+(b-1)*6.5;
              }
              else{
              price=15+((int)(b*10)/10)*6.5;}
        printf("Price: %.2f\n",price);
       }
      return 0;
	}
