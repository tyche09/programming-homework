//date transform into week
#include <stdio.h>
int getWeek(int day)
{
	/**********Begin**********/
	int d,m,y,w;
    d=day%100;
    m=(day%10000-d)/100;
    y=day/10000;
    if(m==1){
        m=13;
        y=y-1;
    }
    else if(m==2){
        m=14;
        y=y-1;
    }
    w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
    return w;

}

void printWeek(int w)
{
	/**********Begin**********/
	 /*switch(w){
     case '0':printf("MON");break;
     case '1':printf("TUE");break;
     case '2':printf("WED");break;
     case '3':printf("THU");break;
     case '4':printf("FRI");break;
     case '5':printf("SAT");break;
     case '6':printf("SUN");break;
     default: break;
     }*/
     if(w==0)
        printf("MON");
     else if(w==1)
        printf("TUE");
     else if(w==2)
        printf("WED");
     else if(w==3)
        printf("THU");
     else if(w==4)
        printf("FRI");
     else if(w==5)
        printf("SAT");
     else if(w==6)
        printf("SUN");

}
int main()
{
	int date;
   scanf("%d",&date);
   int week = getWeek(date);
   printWeek(week);
	return 0;
}
