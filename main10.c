//guess prime number
#include <stdio.h>
#include <math.h>
int judgePrime(int);
int main()
{
	int n;
	while (scanf("%d", &n) != EOF) { //������������Ļ������
		printf(judgePrime(n) ? "yes\n" : "no\n"); // ���������ʽʹ������Ϊ����
	}
	return 0;
}

int judgePrime(int n) { //��������ж�һ�����Ƿ�Ϊ����
	/**********Begin**********/

 int flag=1;
 if(n<=1){
   return 0;
 }
 else{
     for(int i=2;i<n;i++){
         if(n%i==0){

            flag=0;
            break;
            return 0;
         }
     }
     if(flag==1){
        return 1;
     }
 }




    /**********End**********/
}
