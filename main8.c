//random
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main()
{
	/**********Begin**********/
     int a;
     srand((unsigned)time(NULL));
     a=rand()% 6+1;
     printf("Dice is:%d\n",a);
     if(a%2 == 0){
         printf("win");
     }
     else
     printf("lose");

	/**********End**********/
	return 0;
}
