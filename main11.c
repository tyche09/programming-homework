//method of bisection
#include <stdio.h>
#include <math.h>
#define PI acos(-1)
#define eps 1e-7
double f(double);
int main()
{
	double y;
	scanf("%lf", &y);
	double l = 0.33, r = 10, mid;
	while (l < r) //�ж������Ƿ���Լ�������
	{
		mid = (l + r) / 2; //ȡ������е�
		if (fabs(f(mid) - y) < eps) //���Ѿ����㾫��Ҫ����mid��Ϊ���̵Ľ�
			break;
		if (f(mid) < y + eps)
			r = mid;
		else
			l = mid;
	}
	printf("%.5f\n", mid);
	return 0;
}
double f(double x)
{
	/**********Begin**********/
    double m,n,p,t;
    double f;
    m=sin(sqrt(x));
    n=pow(x,0.3333);
    p=pow(M_E,-n);
    t=log(PI*x);
    f=(m+p)/t;
    return f;




   /**********End**********/
}
